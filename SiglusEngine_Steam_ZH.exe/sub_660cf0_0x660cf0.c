// 函数: sub_660cf0
// 地址: 0x660cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg2
int32_t ecx
int32_t eax = sub_650eb0(ecx)

if (eax.b != 0)
    if (ebx.b != 0 && *(data_bac4e4 + 0x19b) != 0)
        eax = sub_60e120(data_bac510 + 0x10ac8)
    
    if (ebx.b == 0 || *(data_bac4e4 + 0x19b) == 0 || eax != 7)
        *(data_bac4a0 + 0x1e4) = 0
        int32_t eax_3
        int32_t ecx_3
        eax_3, ecx_3 = sub_676540(0x2f)
        
        if (arg4 != 0)
            sub_676610(4)
            eax_3, ecx_3 = sub_676610(2)
        
        if (arg3 != 0)
            int32_t var_10_1 = ecx_3
            sub_6018e0(data_bac468 + 0x304, 5)
        
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
