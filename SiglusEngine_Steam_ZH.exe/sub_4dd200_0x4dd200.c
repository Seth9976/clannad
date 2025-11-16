// 函数: sub_4dd200
// 地址: 0x4dd200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
void* (__stdcall** eax_1)(int32_t* arg1, int32_t arg2) = (*esi[1])(esi, 1, 0x50)
esi[0x6b] = eax_1
*eax_1 = sub_4dd190

if (arg2 != 0)
    void* eax_3 = *esi
    *(eax_3 + 0x14) = 4
    (*eax_3)(esi)

if (*(esi[0x72] + 8) == 0)
    arg1 = esi[0x50]
else
    if (esi[0x50] s< 2)
        void* eax_5 = *esi
        *(eax_5 + 0x14) = 0x2f
        (*eax_5)(esi)
    
    sub_4dcc60(esi)
    arg1 = esi[0x50] + 2

void* result = esi[0x37]
arg2 = nullptr

if (esi[9] s> 0)
    int32_t edi
    int32_t var_10_3 = edi
    void* ebx_1 = &eax_1[2]
    int32_t* edi_2 = result + 0x24
    int32_t ecx_3
    
    do
        int32_t ecx_2 = *edi_2
        int32_t eax_15 = (*(esi[1] + 8))(esi, 1, edi_2[-2] * ecx_2, 
            divs.dp.d(sx.q(edi_2[-6] * ecx_2), esi[0x50]) * arg1)
        ecx_3 = esi[9]
        *ebx_1 = eax_15
        result = arg2 + 1
        ebx_1 += 4
        edi_2 = &edi_2[0x15]
        arg2 = result
    while (result s< ecx_3)

return result
