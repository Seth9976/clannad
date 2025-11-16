// 函数: sub_44e6d8
// 地址: 0x44e6d8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_14 = edi
void* edi_1 = nullptr
int32_t result = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_446745(eax)

if (esi == 0)
    return 0x8007000e

int32_t* eax_2 = sub_745f3f(0xc)

if (eax_2 != 0)
    edi_1 = &eax_2[1]
    *eax_2 = 1
    sub_61cdd0(edi_1, 8, 1, sub_446a00)

if (edi_1 != 0)
    int32_t* eax_4 = arg3
    
    if (eax_4 != 0)
        (*(*eax_4 + 4))(eax_4)
        eax_4 = arg3
    
    *(edi_1 + 4) = eax_4
    *edi_1 = 5
    esi[1] = arg2
    *esi = 0xc
    esi[4] = 1
    esi[5] = edi_1
    (*(arg1 + 0xfc))[6] = esi
    *(arg1 + 0xfc) = esi
else
    result = 0x8007000e
    sub_44ce0e(esi, 1)

return result
