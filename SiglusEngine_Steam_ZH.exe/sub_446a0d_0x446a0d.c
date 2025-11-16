// 函数: sub_446a0d
// 地址: 0x446a0d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = *arg1

if (result == 4)
label_446a2a:
    result = arg1[1]
    
    if (result != 0)
        result = (*(*result + 8))(result)
        arg1[1] = 0
else if (result s> 4 && (result s<= 9 || result == 0xf || result == 0x10))
    goto label_446a2a

return result
