// 函数: sub_41bc40
// 地址: 0x41bc40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (arg1:1.b u< 0x80)
label_41bc7e:
    result = data_1333e48
    
    if (result s< 0x18ffe)
        *(result + &data_1333e4c:3) = arg1.b
        data_1333e48 = result
        
        if (result u>= 0x19000)
            noreturn ___report_rangecheckfailure() __tailcall
        
    label_41bc9c:
        (&data_1333e50)[result] = 0
        result += 1
        data_1333e48 = result
else
    if (arg1:1.b u< 0xa0)
        if (arg1:1.b u>= 0xfe)
            goto label_41bc7e
    else if (arg1:1.b u<= 0xdf || arg1:1.b u>= 0xfe)
        goto label_41bc7e
    
    result = data_1333e48
    
    if (result s< 0x18ffd)
        *(result + &data_1333e4c:3) = arg1:1.b
        (&data_1333e50)[result] = arg1.b
        result += 1
        data_1333e48 = result
        
        if (result u< 0x19000)
            goto label_41bc9c
        
        noreturn ___report_rangecheckfailure() __tailcall

return result
