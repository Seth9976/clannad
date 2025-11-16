// 函数: sub_41bcb0
// 地址: 0x41bcb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_1333e48

if (result s< 0x18ffd)
    *(result + &data_1333e4c:3) = 0xa0d
    data_1333e48 = result + 1
    
    if (result + 1 u>= 0x19000)
        noreturn ___report_rangecheckfailure() __tailcall
    
    *(result + 0x1333e51) = 0
    result += 2
    data_1333e48 = result

return result
