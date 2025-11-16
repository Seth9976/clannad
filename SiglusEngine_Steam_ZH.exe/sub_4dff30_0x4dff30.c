// 函数: sub_4dff30
// 地址: 0x4dff30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1
void* esi = eax[0x6d]
int32_t edi
int32_t var_c = edi

if (arg2 != 0)
    void* ecx_1 = *eax
    *(ecx_1 + 0x14) = 4
    int32_t eax_1 = (*ecx_1)(eax)
    *(esi + 0x18) = 0
    *(esi + 0x14) = 0
    return eax_1

if (eax[0x15] == 0)
    eax = eax[0x72]
    *(esi + 4) = eax[1]
else
    bool cond:0_1 = *(esi + 0xc) != 0
    *(esi + 4) = sub_4dfeb0
    
    if (not(cond:0_1))
        int32_t eax_2 = (*(eax[1] + 0x1c))(eax, *(esi + 8), 0, *(esi + 0x10), 1)
        *(esi + 0x18) = 0
        *(esi + 0x14) = 0
        *(esi + 0xc) = eax_2
        return eax_2

*(esi + 0x18) = 0
*(esi + 0x14) = 0
return eax
