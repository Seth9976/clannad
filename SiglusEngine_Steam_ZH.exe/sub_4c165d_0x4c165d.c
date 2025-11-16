// 函数: sub_4c165d
// 地址: 0x4c165d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t var_8_1 = 1
int32_t eax_1 = (*(*arg1 + 0x54))(*(arg2 + 0x6c))
int32_t eax_3 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
*arg3 = eax_3

if (eax_1 == 0xb)
    if (eax_3 u>= 4)
        return 0x80004005
    
    *arg4 = 8
else if (eax_1 != 0xd)
    if (eax_1 != 0xffff)
        return 0x80004005
    
    *arg4 = 0
    var_8_1 = 0
else
    if (eax_3 != 0)
        return 0x80004005
    
    *arg4 = 9

if (arg5 != 0)
    *arg5 = var_8_1

return 0
