// 函数: sub_72f550
// 地址: 0x72f550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg1
int32_t* var_c = edx
int32_t esi = 1
int32_t edi = edx[0x19]
int32_t ebx = edx[0x15]
int32_t var_10 = edi
int32_t eax_1

do
    esi += 1
    eax_1 = esi
    
    if (edi s> 1)
        int32_t i_2 = edi - 1
        int32_t i
        
        do
            eax_1 *= esi
            i = i_2
            i_2 -= 1
        while (i != 1)
while (eax_1 s<= ebx)

if (esi - 1 s< 2)
    *(*edx + 0x14) = 0x3a
    *(*edx + 0x18) = eax_1
    (**edx)(edx)
    edx = var_c

int32_t result = 1

if (edi s> 0)
    int32_t ecx_4
    int32_t edi_2
    edi_2, ecx_4 = __memfill_u32(arg2, esi - 1, edi)
    eax_1 = edi
    int32_t i_1
    
    do
        result *= esi - 1
        i_1 = eax_1
        eax_1 -= 1
    while (i_1 != 1)
    edi = var_10

do
label_72f5d2:
    int32_t esi_2 = 0
    char var_5_1 = 0
    
    if (edi s<= 0)
        break
    
    while (true)
        int32_t eax_5
        
        if (edx[0xb] != 2)
            eax_5 = esi_2
        else
            eax_5 = *((esi_2 << 2) + &data_b0d5e4)
        
        int32_t* edi_3 = arg2 + (eax_5 << 2)
        int32_t ecx_6 = *edi_3
        edx = var_c
        eax_1 = divs.dp.d(sx.q(result), ecx_6) * (ecx_6 + 1)
        
        if (eax_1 s> ebx)
            break
        
        *edi_3 = ecx_6 + 1
        esi_2 += 1
        edi = var_10
        result = eax_1
        var_5_1 = 1
        
        if (esi_2 s>= edi)
            goto label_72f5d2
    
    eax_1.b = var_5_1
    edi = var_10
while (eax_1.b != 0)

return result
