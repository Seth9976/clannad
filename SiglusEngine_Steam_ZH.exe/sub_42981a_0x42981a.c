// 函数: sub_42981a
// 地址: 0x42981a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
int32_t* edx = arg6
int32_t* ebx = arg5
*(*edx + 4) = *(*arg2 + 4)
**edx = **arg2
*(*edx + 0x10) = *(*arg2 + 0x10)
*(*edx + 8) = *ebx
int32_t* eax_1 = *arg2
int32_t ecx_7 = eax_1[1]
int32_t ecx_8 = *eax_1
void** ecx_9 = eax_1[4]
int32_t result = 0
int32_t var_14 = 0
arg5 = 1

if (ecx_9 u>= 1)
    arg5 = ecx_9

int32_t* ecx_11 = eax_1[2] + arg1
void* var_c

if (*ecx_11 != 0)
    var_c = &ecx_11[1]
else
    var_c = nullptr

int32_t* eax_3 = eax_1[3] + arg1
int32_t* var_10

if (*eax_3 != 0)
    var_10 = &eax_3[1]
else
    var_10 = nullptr

char* edi_1 = var_c
void* esi_5 = &edi_1[1]

do
    eax_3.b = *edi_1
    edi_1 = &edi_1[1]
while (eax_3.b != 0)

*(arg4 + *ebx) = edi_1 - esi_5 + 1
*ebx += 4
void* var_1c = edi_1 - esi_5 + 1
int32_t esi_8
int32_t edi_5
edi_5, esi_8 = __builtin_memcpy(*ebx + arg4, var_c, (edi_1 - esi_5 + 1) u>> 2 << 2)
__builtin_memcpy(edi_5, esi_8, (edi_1 - esi_5 + 1) & 3)
void* eax_6 = (edi_1 - esi_5 + 1) & 3
char temp1 = eax_6.b
eax_6.b = neg.b(eax_6.b)
int32_t* esi_11 = var_10
*ebx += (neg.d(sbb.d(eax_6, eax_6, temp1 != 0)) + ((edi_1 - esi_5 + 1) u>> 2)) << 2
*(*edx + 0xc) = *ebx

if (esi_11 != 0)
    void* edi_6 = esi_11 + 1
    int32_t eax_11
    
    do
        eax_11.b = *esi_11
        esi_11 += 1
    while (eax_11.b != 0)
    *(arg4 + *ebx) = esi_11 - edi_6 + 1
    *ebx += 4
    void* var_1c_1 = esi_11 - edi_6 + 1
    int32_t esi_15
    int32_t edi_9
    edi_9, esi_15 = __builtin_memcpy(*ebx + arg4, var_10, (esi_11 - edi_6 + 1) u>> 2 << 2)
    __builtin_memcpy(edi_9, esi_15, (esi_11 - edi_6 + 1) & 3)
    void* eax_15 = (esi_11 - edi_6 + 1) & 3
    char temp3_1 = eax_15.b
    eax_15.b = neg.b(eax_15.b)
    *ebx += (neg.d(sbb.d(eax_15, eax_15, temp3_1 != 0)) + ((esi_11 - edi_6 + 1) u>> 2)) << 2
else
    int32_t eax_12 = *ebx
    *(arg4 + eax_12) &= esi_11
    *ebx += 4

if (ecx_7 s>= 0)
    if (ecx_7 s<= 1)
        goto label_429a63
    
    if (ecx_7 s<= 3)
        var_14 = 1
    label_429a63:
        *(*edx + 0x14) = *(*arg2 + 0x14)
        *(*edx + 0x18) = *(*arg2 + 0x18)
        int32_t eax_31
        
        if (var_14 == 0)
            eax_31 = arg5 << 2
        else
            eax_31 = arg5 << 4
        
        if (ecx_8 == 1 || ecx_8 == 2 || ecx_8 == 3)
            int32_t eax_32 = eax_31 << 2
            int32_t esi_25
            int32_t edi_14
            edi_14, esi_25 = __builtin_memcpy(*arg7, *arg3, eax_32 u>> 2 << 2)
            __builtin_memcpy(edi_14, esi_25, eax_32 & 3)
            *arg3 += eax_32
            *arg7 += eax_32
            *arg2 += 0x1c
            *edx += 0x1c
            return result
    else if (ecx_7 == 4)
        if (ecx_8 s>= 4)
            if (ecx_8 s<= 9)
            label_429a26:
                
                if (arg5 != 0)
                    arg4 = arg5
                    void** i
                    
                    do
                        **arg7 = *arg8
                        *arg8 += 1
                        *arg3 += 4
                        *arg7 += 4
                        i = arg4
                        arg4 -= 1
                    while (i != 1)
                
                *arg2 += 0x14
                *edx += 0x14
                return result
            
            if (ecx_8 s> 0xe && ecx_8 s<= 0x10)
                goto label_429a26
    else if (ecx_7 == 5)
        int32_t* eax_21 = arg2
        *(*edx + 0x14) = *(*eax_21 + 0x14)
        void* ecx_25 = *eax_21
        int32_t esi_19 = *(ecx_25 + 0x14)
        *eax_21 = ecx_25 + 0x18
        *edx += 0x18
        int32_t ecx_27 = *ebx
        int32_t edi_10 = *eax_21
        int32_t esi_20 = *edx
        
        if (arg5 != 0)
            void** i_1
            
            do
                int32_t var_10_1 = 0
                *eax_21 = edi_10
                *edx = esi_20
                *ebx = ecx_27
                
                if (esi_19 u> 0)
                    do
                        int32_t result_1 =
                            sub_42981a(arg1, eax_21, arg3, arg4, ebx, edx, arg7, arg8)
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        var_10_1 += 1
                        edx = arg6
                        eax_21 = arg2
                    while (var_10_1 u< esi_19)
                
                i_1 = arg5
                arg5 -= 1
            while (i_1 != 1)
        
        return result

return 0x80004005
