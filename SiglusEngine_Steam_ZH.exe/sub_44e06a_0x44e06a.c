// 函数: sub_44e06a
// 地址: 0x44e06a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t result = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* ebx

if (eax == 0)
    ebx = nullptr
else
    ebx = sub_446745(eax)

if (ebx == 0)
    return 0x8007000e

int32_t* eax_2 = sub_745f3f(0x10)

if (eax_2 != 0)
    int32_t edi
    int32_t var_18_1 = edi
    *eax_2 = *arg3
    void* edi_2 = &eax_2[1]
    void* esi_2 = &arg3[1]
    *edi_2 = *esi_2
    void* edi_3 = edi_2 + 4
    void* esi_3 = esi_2 + 4
    *edi_3 = *esi_3
    *(edi_3 + 4) = *(esi_3 + 4)
    ebx[3] = eax_2
    *ebx = 7
    ebx[1] = arg2
    (*(arg1 + 0xfc))[6] = ebx
    *(arg1 + 0xfc) = ebx
    ebx = nullptr
else
    result = 0x8007000e

if (ebx != 0)
    sub_44ce0e(ebx, 1)

return result
