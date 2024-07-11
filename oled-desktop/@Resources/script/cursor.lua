function CopyFile(sourceFile)
	-- Get source file path
	local sourceFilePath = ExpandEnvVars(sourceFile)

	-- Get target file path
	local targetDir = SELF:GetOption("TargetDir")
	local targetPath = targetDir .. "pointer.cur"

	-- Check if target file exists
	local f = io.open(targetPath, "r")
	if f then
		f:close()
		print("Cursor file already exists")

		-- Set cursor
		SKIN:Bang("!SetOption", "Background", "MouseActionCursorName", "pointer.cur")
		return
	end

	-- Open source file:
	local source = io.open(sourceFilePath, "rb")
	if not source then
		print("Source file not found: " .. sourceFilePath)
		return
	end

	-- Read source file content:
	local content = source:read("*all")
	source:close()

	-- Open target file:
	local target = io.open(targetPath, "wb")
	if not target then
		print("Error creating target file: " .. targetPath)
		return
	end

	-- Write content to target file:
	target:write(content)
	target:close()

	print("Cursor file created: " .. targetPath)

	-- Set cursor
	SKIN:Bang("!SetOption", "Background", "MouseActionCursorName", "pointer.cur")
end

-- Expand environment variables (such as %SYSTEMROOT%)
function ExpandEnvVars(path)
	return (
		path:gsub("%%(.-)%%", function(var)
			---@diagnostic disable-next-line: ambiguity-1
			return os.getenv(var) or "%" .. var .. "%"
		end)
	)
end
