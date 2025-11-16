// 函数: sub_66de30
// 地址: 0x66de30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg4
void* ebx = arg2
int32_t edi = arg3
void* var_c = ebx
void* esi = (ebx << 1) + 2
int32_t var_8 = edi
bool cond:0 = esi != eax

while (esi s< eax)
    void* ecx_2 = esi * 0x30 + edi
    void* eax_1 = ecx_2 - 0x30
    
    if (*(ecx_2 - 0x1c) u>= 8)
        eax_1 = *eax_1
    
    int32_t var_1c_1 = *(ecx_2 - 0x20)
    
    if (sub_536340(ecx_2, ecx_2, *(ecx_2 + 0x10), eax_1) s< 0)
        esi -= 1
    
    int32_t* ebx_3 = ebx * 0x30 + var_8
    void** edi_3 = esi * 0x30 + var_8
    
    if (ebx_3 != edi_3)
        sub_52e3c0(ebx_3, edi_3, 0, 0xffffffff)
    
    if (&ebx_3[6] != &edi_3[6])
        sub_52e3c0(&ebx_3[6], &edi_3[6], 0, 0xffffffff)
    
    eax = arg4
    ebx = esi
    edi = var_8
    esi = (esi << 1) + 2
    cond:0 = esi != eax

if (not(cond:0))
    void** eax_6 = eax * 0x30 - 0x30 + edi
    int32_t* esi_3 = ebx * 0x30 + edi
    
    if (esi_3 != eax_6)
        sub_52e3c0(esi_3, eax_6, 0, 0xffffffff)
    
    eax = &eax_6[6]
    
    if (&esi_3[6] != eax)
        eax = sub_52e3c0(&esi_3[6], eax, 0, 0xffffffff)
    
    ebx = arg4 - 1

int32_t var_1c_2 = arg6
return sub_66e7a0(eax, ebx, edi, var_c, arg5)
