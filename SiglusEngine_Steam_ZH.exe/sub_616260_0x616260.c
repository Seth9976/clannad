// 函数: sub_616260
// 地址: 0x616260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac4e4
int32_t* edi = data_bac4a4
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x77280773, edi[1] - *edi)
int32_t edx_1 = edx s>> 9

if (*(esi + 0x1c) != (edx_1 u>> 0x1f) + edx_1)
    *(esi + 0x20) = 0
    *(esi + 0x28) = *(edi[3] + 0xc)

int32_t ebx = *(esi + 0x20)
int32_t edx_3

if (ebx s>= 0)
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = muls.dp.d(0x77280773, edi[1] - *edi)
    edx_3 = edx_2 s>> 9

if (ebx s< 0 || (edx_3 u>> 0x1f) + edx_3 s<= ebx)
    *(esi + 0x20) = 0
    *(esi + 0x28) = *(edi[3] + 0xc)

void* ecx_4 = edi[3]
int32_t edx_5 = *(esi + 0x20) << 4

if (*(esi + 0x24) != (*(ecx_4 + edx_5 + 4) - *(ecx_4 + edx_5)) s>> 3)
    *(esi + 0x28) = *(ecx_4 + edx_5 + 0xc)

int32_t ebx_1 = *(esi + 0x28)
void* ecx_5

if (ebx_1 s>= 0)
    ecx_5 = edi[3]

if (ebx_1 s< 0 || (*(ecx_5 + edx_5 + 4) - *(ecx_5 + edx_5)) s>> 3 s<= ebx_1)
    *(esi + 0x28) = *(edi[3] + edx_5 + 0xc)

int32_t* edx_6 = edx_5 + edi[3]
int32_t* ecx_7 = *edx_6 + (*(esi + 0x28) << 3)

if (*(esi + 0x2c) != *ecx_7 || *(esi + 0x30) != ecx_7[1])
    *(esi + 0x28) = edx_6[3]

sub_615080()
char eax_25
int32_t edx_7
eax_25, edx_7 = sub_614c70(1)

if (eax_25 != 0)
    int32_t eax_27 = *data_bac4e4
    
    if (eax_27 == 0)
        edx_7.b = 1
        sub_6152f0(nullptr, edx_7.b)
        int32_t eax_28 = sub_614e40()
        data_bac400 -= 1
        return eax_28
    
    if (eax_27 == 2)
        edx_7.b = 1
        sub_615520(nullptr, edx_7.b)
        int32_t eax_29 = sub_614e40()
        data_bac400 -= 1
        return eax_29
    
    if (eax_27 == 1)
        sub_6157c0(eax_27, edx_7, nullptr, eax_27.b)
    
    eax_25 = sub_614e40()
    data_bac400 -= 1

return eax_25
