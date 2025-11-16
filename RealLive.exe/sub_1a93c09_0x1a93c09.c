// 函数: sub_1a93c09
// 地址: 0x1a93c09
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char* result = nullptr

if (data_1c090dc == 0)
    return sub_1a92ff0(arg1, arg2.b)

sub_1a976dc(0x19)
char* result_1 = arg1
char i

do
    i = *result_1
    uint32_t i_1 = zx.d(i)
    bool cond:0_1
    
    if ((*(zx.d(i_1.b) + 0x1c091e1) & 4) == 0)
        cond:0_1 = arg2 != i_1
    label_1a93c64:
        
        if (not(cond:0_1))
            result = result_1
    else
        i = result_1[1]
        result_1 = &result_1[1]
        
        if (i == 0)
            cond:0_1 = result != 0
            goto label_1a93c64
        
        if (arg2 == (i_1 << 8 | zx.d(i)))
            result = &result_1[0xffffffff]
    result_1 = &result_1[1]
while (i != 0)
__unlock(0x19)
return result
