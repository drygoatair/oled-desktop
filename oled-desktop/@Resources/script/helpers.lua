function RoundValue(num)
    if num == nil or type(num) ~= "number" then
        return 0
    end
    return math.floor(num + 0.5)
end

function Highest(num1, num2)
    assert(tonumber(num1), "Round expects a number (num1).")
    assert(tonumber(num2), "Round expects a number (num2).")
    return math.max(num1, num2)
end

function StripLeadingZero(str)
    return str:gsub("^0", " ")
end

function TimeInSecs()
    print('time')
    return os.time()
end
