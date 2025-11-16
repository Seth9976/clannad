// 函数: sub_5cc720
// 地址: 0x5cc720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = *arg1
char eax
int32_t* ecx
int32_t* esi_1
eax, esi_1 = sub_5ccf60(ecx)

if (eax == 0)
    int32_t* ecx_1 = *arg1
    
    if (esi_1 == 0)
        return 0
    
    int32_t* edi_1 = *esi_1
    int32_t eax_3
    
    if (ecx_1 != 0)
        eax_3 = (**ecx_1)(ecx_1, 0xaf2e58, esi_1)
    
    if (ecx_1 == 0 || eax_3 s< 0)
        *esi_1 = 0
    
    if (edi_1 != 0)
        (*(*edi_1 + 8))(edi_1)

return *esi_1
