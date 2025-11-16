// 函数: sub_9a6d80
// 地址: 0x9a6d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t ecx
int32_t edx
int32_t* esi = sub_74c590(eax, edx, ecx, 1, 0x2c)
int32_t ebx = 0
int32_t* var_c = esi
int32_t var_10 = 0
int32_t edi = 0
void* eax_2 = *(*(arg1 + 4) + 0x1c)
*esi = arg2
int32_t edx_1 = *(eax_2 + 0xb20)
int32_t ecx_4 = *(arg2 + 0xc)
int32_t eax_4 = *(arg2 + 0x14)
esi[1] = ecx_4
esi[3] = edx_1
int32_t ecx_6 = eax_4 * 7
int32_t* eax_5 = edx_1 + (ecx_6 << 3)
esi[4] = eax_5
int32_t i_3 = *eax_5
void* eax_6
void* edx_2
eax_6, edx_2 = sub_74c590(i_3, edx_1, ecx_6, ecx_4, 4)
void* ecx_7 = nullptr
esi[5] = eax_6
arg1 = nullptr

if (ecx_4 s> 0)
    void* eax_8 = arg2 + 0x18
    void* var_18_1 = eax_8
    
    do
        uint32_t i = *(eax_8 + (ecx_7 << 2))
        int32_t esi_1 = 0
        
        if (i != 0)
            do
                esi_1 += 1
                i u>>= 1
            while (i != 0)
            
            if (esi_1 != 0)
                if (esi_1 s> edi)
                    edi = esi_1
                
                int32_t eax_9 = sub_74c590(i, edx_2, ecx_7, esi_1, 4)
                ecx_7 = arg1
                edx_2 = eax_6
                int32_t edi_1 = 0
                *(edx_2 + (ecx_7 << 2)) = eax_9
                
                if (esi_1 s> 0)
                    int32_t eax_10 = 1
                    void* ebx_1 = arg2 + 0x118 + (ebx << 2)
                    edx_2 = var_18_1
                    
                    do
                        if ((*(edx_2 + (ecx_7 << 2)) & eax_10) != 0)
                            int32_t ecx_8 = *ebx_1
                            var_10 += 1
                            ebx_1 += 4
                            *(*(eax_6 + (arg1 << 2)) + (edi_1 << 2)) =
                                *(eax_2 + 0xb20) + ecx_8 * 0x38
                            ecx_7 = arg1
                            edx_2 = var_18_1
                        
                        edi_1 += 1
                        eax_10 = rol.d(eax_10, 1)
                    while (edi_1 s< esi_1)
                    
                    ebx = var_10
        
        eax_8 = var_18_1
        ecx_7 += 1
        arg1 = ecx_7
    while (ecx_7 s< ecx_4)
    
    esi = var_c

esi[6] = 1

if (i_3 s> 0)
    int32_t ecx_13 = 1
    int32_t i_2 = i_3
    int32_t i_1
    
    do
        ecx_13 *= esi[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    esi = var_c
    esi[6] = ecx_13

int32_t ebx_2 = esi[6]
esi[2] = edi
int32_t ecx_14 = _malloc(ebx_2 << 2)
void* edi_2 = nullptr
int32_t var_1c_1 = ecx_14
esi[7] = ecx_14
arg1 = nullptr

if (ebx_2 s<= 0)
    return esi

int32_t edx_11 = divs.dp.d(sx.q(ebx_2), esi[1])
int32_t eax_18 = i_3 << 2
int32_t var_18_2 = edx_11
int32_t var_28_2 = eax_18

while (true)
    int32_t* ebx_3 = ecx_14 + (edi_2 << 2)
    void* esi_3 = edi_2
    arg2 = esi_3
    *ebx_3 = _malloc(eax_18)
    int32_t ebx_4 = 0
    
    if (i_3 s> 0)
        int32_t edi_3 = edx_11
        
        do
            int32_t temp0_1 = divs.dp.d(sx.q(esi_3), edi_3)
            arg2 -= temp0_1 * edi_3
            var_c[1]
            edi_3 = divs.dp.d(sx.q(edi_3), var_c[1])
            *(*ebx_3 + (ebx_4 << 2)) = temp0_1
            ebx_4 += 1
            esi_3 = arg2
        while (ebx_4 s< i_3)
        
        edi_2 = arg1
    
    edi_2 += 1
    ecx_14 = var_1c_1
    edx_11 = var_18_2
    arg1 = edi_2
    
    if (edi_2 s>= var_c[6])
        break
    
    eax_18 = var_28_2

return var_c
