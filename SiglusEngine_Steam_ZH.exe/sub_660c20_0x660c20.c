// 函数: sub_660c20
// 地址: 0x660c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac510
int32_t edi = *(eax + 0x10b8c)
int32_t ebx
ebx.b = arg3
int32_t ecx = *(eax + 0x10b88)
ebx:1.b = arg2
int32_t esi = ecx + edi

if (esi s>= 0 && *(eax + 0x10b90) + ecx + edi s> esi)
    eax = sub_6a5240(data_bac504 + 0x4b068, esi)
    
    if (eax.b != 0)
        if (ebx.b != 0 && *(data_bac4e4 + 0x19b) != 0)
            eax = sub_60e120(data_bac510 + 0x10ac8)
        
        if (ebx.b == 0 || *(data_bac4e4 + 0x19b) == 0 || eax != 7)
            *(data_bac4a0 + 0x1e4) = 0
            int32_t eax_6
            int32_t ecx_4
            eax_6, ecx_4 = sub_676610(0x2a)
            
            if (arg4 != 0)
                sub_676610(4)
                eax_6, ecx_4 = sub_676610(2)
            
            if (ebx:1.b != 0)
                int32_t var_14_2 = ecx_4
                sub_6018e0(data_bac468 + 0x304, 5)
            
            eax_6.b = 1
            return eax_6

eax.b = 0
return eax
