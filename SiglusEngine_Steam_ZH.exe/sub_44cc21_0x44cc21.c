// 函数: sub_44cc21
// 地址: 0x44cc21
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* ebx
ebx.w = arg2
int32_t edi
int32_t var_14 = edi

if (*(arg1 + 0x38) u< ebx.w)
    uint32_t edi_1 = zx.d(ebx.w)
    uint32_t* eax_4 = sub_745f3f(edi_1 * 0x64 + 4)
    void* edi_2
    
    if (eax_4 == 0)
        edi_2 = nullptr
    else
        *eax_4 = edi_1
        sub_61cdd0(&eax_4[1], 0x64, edi_1, sub_44bb09)
        edi_2 = &eax_4[1]
        ebx.w = arg2
    
    if (edi_2 == 0)
        return 0x8007000e
    
    int32_t* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        sub_44cbd3(ecx_1, 3)
        *(arg1 + 4) = 0
    
    *(arg1 + 4) = edi_2
    *(arg1 + 0x38) = ebx.w

*(arg1 + 0x36) = ebx.w
return 0
