// 函数: sub_660f30
// 地址: 0x660f30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg2
enum MESSAGEBOX_RESULT result

if (arg3 != 0)
    result = sub_60e120(data_bac510 + 0x10b58)

if (arg3 == 0 || result != IDNO)
    *(data_bac4a0 + 0x1e4) = 0
    int32_t ecx_2
    result, ecx_2 = sub_676610(9)
    
    if (arg4 != 0)
        sub_676610(4)
        result, ecx_2 = sub_676610(2)
    
    if (ebx.b != 0)
        int32_t var_c_1 = ecx_2
        return sub_6018e0(data_bac468 + 0x304, 7)

return result
