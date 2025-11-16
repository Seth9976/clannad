// 函数: sub_7269d0
// 地址: 0x7269d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = 0xffffffff
int32_t ebx = *arg2
int32_t* eax_1 = arg2[2]
void* var_8 = 0xffffffff
int32_t ecx = *eax_1
int32_t edi = eax_1[3]
void* ecx_1 = nullptr
int32_t var_c = edi
*(arg1 + 0x1450) = 0
*(arg1 + 0x1454) = 0x23d

if (edi s> 0)
    do
        if (*(ebx + (ecx_1 << 2)) == 0)
            *(ebx + (ecx_1 << 2) + 2) = 0
        else
            *(arg1 + 0x1450) += 1
            edx = ecx_1
            *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = ecx_1
            *(ecx_1 + arg1 + 0x1458) = 0
        
        ecx_1 += 1
    while (ecx_1 s< edi)
    
    var_8 = edx

if (*(arg1 + 0x1450) s< 2)
    do
        void* ecx_2
        
        if (edx s>= 2)
            ecx_2 = nullptr
        else
            edx += 1
            ecx_2 = edx
        
        *(arg1 + 0x1450) += 1
        *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c) = ecx_2
        *(ebx + (ecx_2 << 2)) = 1
        *(arg1 + ecx_2 + 0x1458) = 0
        *(arg1 + 0x16a8) -= 1
        
        if (ecx != 0)
            *(arg1 + 0x16ac) -= zx.d(*(ecx + (ecx_2 << 2) + 2))
    while (*(arg1 + 0x1450) s< 2)
    
    var_8 = edx

arg2[1] = edx
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(*(arg1 + 0x1450))
uint32_t eax_9 = eax_8 - edx_1

for (int32_t i = eax_9 s>> 1; i s>= 1; i -= 1)
    eax_9 = sub_726640(eax_9, ebx, arg1, i)

do
    int32_t edi_2 = *(arg1 + 0xb60)
    int32_t eax_11 = *(arg1 + (*(arg1 + 0x1450) << 2) + 0xb5c)
    *(arg1 + 0xb60) = eax_11
    *(arg1 + 0x1450) -= 1
    sub_726640(eax_11, ebx, arg1, 1)
    int32_t ecx_5 = *(arg1 + 0xb60)
    *(arg1 + 0x1454) -= 1
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = edi_2
    *(arg1 + 0x1454) -= 1
    *(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = ecx_5
    int16_t* eax_14 = ebx + (ecx_5 << 2)
    int16_t* var_14_1 = eax_14
    eax_14.w = *eax_14
    eax_14.w += *(ebx + (edi_2 << 2))
    *(ebx + (var_c << 2)) = eax_14.w
    eax_14.b = *(arg1 + edi_2 + 0x1458)
    ecx_5.b = *(arg1 + ecx_5 + 0x1458)
    char eax_15 = eax_14.b
    
    if (eax_14.b u< ecx_5.b)
        eax_15 = ecx_5.b
    
    *(arg1 + var_c + 0x1458) = eax_15 + 1
    uint32_t eax_16 = zx.d(var_c.w)
    var_14_1[1] = eax_16.w
    *(ebx + (edi_2 << 2) + 2) = eax_16.w
    *(arg1 + 0xb60) = var_c
    var_c += 1
    sub_726640(eax_16, ebx, arg1, 1)
while (*(arg1 + 0x1450) s>= 2)

*(arg1 + 0x1454) -= 1
*(arg1 + (*(arg1 + 0x1454) << 2) + 0xb5c) = *(arg1 + 0xb60)
return sub_726940(sub_726720(arg1, arg2), var_8, ebx, arg1 + 0xb3c)
