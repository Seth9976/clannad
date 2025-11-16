// 函数: sub_429664
// 地址: 0x429664
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *arg2
int32_t edx = ecx[4]
int32_t var_18 = ecx[1]
int32_t eax_2 = *ecx
int32_t ebx
int32_t var_1c = ebx
int32_t edi
int32_t var_24 = edi
int32_t eax_3 = 1
int32_t result = 0
int32_t var_c

if (edx u>= 1)
    var_c = edx
    eax_3 = edx
else
    var_c = 1

int32_t* edx_2 = ecx[2] + arg1
void* edx_3

if (*edx_2 != 0)
    edx_3 = &edx_2[1]
else
    edx_3 = nullptr

int32_t* ecx_2 = ecx[3] + arg1
void* ecx_3

if (*ecx_2 != 0)
    ecx_3 = &ecx_2[1]
else
    ecx_3 = nullptr

void* esi_1 = edx_3
void* edi_1 = esi_1 + 1

do
    ebx.b = *esi_1
    esi_1 += 1
while (ebx.b != 0)

void* esi_3 = edx_3 + 1

do
    ebx.b = *edx_3
    edx_3 += 1
while (ebx.b != 0)

if (ecx_3 != 0)
    void* esi_4 = ecx_3
    void* edi_2 = esi_4 + 1
    
    do
        ebx.b = *esi_4
        esi_4 += 1
    while (ebx.b != 0)
    
    void* edi_3 = ecx_3 + 1
    
    do
        ebx.b = *ecx_3
        ecx_3 += 1
    while (ebx.b != 0)
    
    void* ecx_6 = (ecx_3 - edi_3 + 1) & 3
    char temp4_1 = ecx_6.b
    ecx_6.b = neg.b(ecx_6.b)
    ecx_3 = neg.d(sbb.d(ecx_6, ecx_6, temp4_1 != 0)) + ((esi_4 - edi_2 + 1) u>> 2)

void** ebx_1 = arg3
int32_t* arg_c
int32_t* edi_4 = arg_c
void* edx_6 = (edx_3 - esi_3 + 1) & 3
char temp1 = edx_6.b
edx_6.b = neg.b(edx_6.b)
int32_t* arg_10
int32_t* esi_12 = arg_10
*ebx_1 = ((((esi_1 - edi_1 + 1) u>> 2) + neg.d(sbb.d(edx_6, edx_6, temp1 != 0)) + ecx_3) << 2) + 8
*esi_12 = 0
int32_t ecx_10 = var_18
*edi_4 = 0

if (ecx_10 s>= 0)
    int32_t eax_12
    
    if (ecx_10 s<= 1)
        eax_12 = eax_3 << 2
    label_4297ed:
        *esi_12 = eax_12
        *edi_4 = 0x1c
        
        if (eax_2 == 1 || eax_2 == 2 || eax_2 == 3)
            *esi_12 <<= 2
            *arg2 += 0x1c
            return result
    else
        if (ecx_10 s<= 3)
            eax_12 = eax_3 << 4
            goto label_4297ed
        
        if (ecx_10 == 4)
            *edi_4 = 0x14
            
            if (eax_2 s>= 4)
                if (eax_2 s<= 9)
                label_4297e0:
                    *esi_12 = eax_3 << 2
                    *arg2 += 0x14
                    return result
                
                if (eax_2 s> 0xe && eax_2 s<= 0x10)
                    goto label_4297e0
        else if (ecx_10 == 5)
            int32_t* eax_4 = arg2
            void* ecx_11 = *eax_4
            int32_t edx_10 = *(ecx_11 + 0x14)
            arg3 = nullptr
            *eax_4 = ecx_11 + 0x18
            *edi_4 = 0x18
            
            if (edx_10 u> 0)
                while (true)
                    int32_t result_1 = sub_429664(arg1, eax_4, &arg_c, &arg_10, &var_18)
                    result = result_1
                    
                    if (result_1 s< 0)
                        return result
                    
                    *esi_12 += arg_10
                    *edi_4 += arg_c
                    *ebx_1 += var_18
                    arg3 += 1
                    
                    if (arg3 u>= edx_10)
                        break
                    
                    eax_4 = arg2
            
            *esi_12 *= var_c
            return result

return 0x80004005
