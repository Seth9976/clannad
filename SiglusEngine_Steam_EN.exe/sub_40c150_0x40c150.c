// 函数: sub_40c150
// 地址: 0x40c150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg1[0x10]
int32_t* ecx = *(eax + 4)
void* eax_1 = *(eax + 0x68)
int32_t edx = ecx[7]
int32_t edx_1 = *(edx + (arg1[7] << 2))
arg1[9] = edx_1
int32_t edi = ecx[1]
int32_t ebx = edi << 2
int32_t eax_4
eax_4.b = (ebx + 3).b & 0xfc
__chkstk(eax_4)
int32_t __saved_edi
int32_t* var_20 = &__saved_edi
int32_t eax_6
eax_6.b = (ebx + 3).b & 0xfc
__chkstk(eax_6)
int32_t* var_1c = &__saved_edi
int32_t eax_8
eax_8.b = (ebx + 3).b & 0xfc
__chkstk(eax_8)
int32_t* var_14 = &__saved_edi
int32_t eax_10
eax_10.b = (ebx + 3).b & 0xfc
__chkstk(eax_10)
int32_t ebx_1 = 0

if (edi s> 0)
    int32_t* edi_1 = var_14
    uint32_t ecx_3 = edx_1 << 2 u>> 1
    int32_t* eax_11 = &__saved_edi - edi_1
    int32_t* var_10_1 = edi_1
    int32_t* var_8_1 = &arg2[1]
    
    while (true)
        int32_t eax_14 = arg2[*var_8_1 + 0x101]
        int32_t eax_16 = (*((&data_632fc0)[*(edx + (eax_14 << 2) + 0x320)] + 0x14))(arg1, 
            *(*(eax_1 + 0x30) + (eax_14 << 2)))
        int32_t edx_6
        edx_6.b = eax_16 != 0
        *(eax_11 + edi_1) = eax_16
        *edi_1 = edx_6
        int32_t edi_3 = __builtin_memset(*(*arg1 + (ebx_1 << 2)), 0, ecx_3 u>> 2 << 2)
        ebx_1 += 1
        __builtin_memset(edi_3, 0, ecx_3 & 3)
        var_8_1 = &var_8_1[1]
        var_10_1 = &var_10_1[1]
        
        if (ebx_1 s>= ecx[1])
            break
        
        edi_1 = var_10_1

int32_t* edi_8 = arg2
int32_t var_8_2 = 0

if (edi_8[0x121] s> 0)
    void* eax_19 = &edi_8[0x222]
    bool cond:2_1
    
    do
        int32_t edx_11 = *(eax_19 - 0x400)
        
        if (var_14[edx_11] != 0 || var_14[*eax_19] != 0)
            var_14[edx_11] = 1
            var_14[*eax_19] = 1
        
        eax_19 += 4
        cond:2_1 = var_8_2 + 1 s< edi_8[0x121]
        var_8_2 += 1
    while (cond:2_1)

int32_t var_8_3 = 0

if (*edi_8 s> 0)
    void* var_24_2 = &edi_8[0x111]
    bool cond:1_1
    
    do
        int32_t edi_7 = 0
        int32_t i = 0
        
        if (ecx[1] s> 0)
            int32_t* eax_22 = var_1c
            void* var_10_2 = &arg2[1]
            void* edx_19 = var_20 - eax_22
            
            do
                if (*var_10_2 == var_8_3)
                    int32_t edx_21
                    edx_21.b = var_14[i] != 0
                    *eax_22 = edx_21
                    edi_7 += 1
                    eax_22 = &eax_22[1]
                    *(edx_19 + eax_22 - 4) = *(*arg1 + (i << 2))
                
                i += 1
                var_10_2 += 4
            while (i s< ecx[1])
        
        int32_t eax_23 = *var_24_2
        (*((&data_632fc8)[*(edx + (eax_23 << 2) + 0x520)] + 0x1c))(arg1, 
            *(*(eax_1 + 0x34) + (eax_23 << 2)), var_20, var_1c, edi_7)
        cond:1_1 = var_8_3 + 1 s< *arg2
        var_8_3 += 1
        var_24_2 += 4
    while (cond:1_1)
    edi_8 = arg2

int32_t ecx_19 = edi_8[0x121]

if (ecx_19 - 1 s>= 0)
    void* edi_9 = &edi_8[ecx_19 + 0x221]
    int32_t eax_28
    int32_t edx_33
    edx_33:eax_28 = sx.q(edx_1)
    int32_t ebx_10 = (eax_28 - edx_33) s>> 1
    int32_t var_24_3 = ecx_19
    bool cond:3_1
    
    do
        int32_t eax_30 = *arg1
        float* ecx_22 = *(eax_30 + (*(edi_9 - 0x400) << 2))
        
        if (ebx_10 s> 0)
            int32_t var_28_1 = ebx_10
            float* edx_37 = *(eax_30 + (*edi_9 << 2)) - ecx_22
            bool cond:7_1
            
            do
                long double x87_r7_1 = fconvert.t(*ecx_22)
                long double x87_r6_1 = fconvert.t(*(edx_37 + ecx_22))
                long double temp3_1 = fconvert.t(0f)
                x87_r7_1 - temp3_1
                int32_t eax_31
                eax_31.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3000
                long double temp4_1 = fconvert.t(0f)
                x87_r6_1 - temp4_1
                bool cond:6_1 = (eax_31:1.b & 0x41) != 0
                eax_31.w = (x87_r6_1 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp4_1 ? 1 : 0) << 0xe | 0x3000
                
                if (cond:6_1)
                    if ((eax_31:1.b & 0x41) != 0)
                        *(edx_37 + ecx_22) = fconvert.s(x87_r7_1)
                        *ecx_22 = fconvert.s(x87_r7_1 - x87_r6_1)
                    else
                        *(edx_37 + ecx_22) = fconvert.s(x87_r6_1 + x87_r7_1)
                else if ((eax_31:1.b & 0x41) != 0)
                    *(edx_37 + ecx_22) = fconvert.s(x87_r7_1)
                    *ecx_22 = fconvert.s(x87_r6_1 + x87_r7_1)
                else
                    *(edx_37 + ecx_22) = fconvert.s(x87_r7_1 - x87_r6_1)
                
                ecx_22 = &ecx_22[1]
                cond:7_1 = var_28_1 != 1
                var_28_1 -= 1
            while (cond:7_1)
        
        edi_9 -= 4
        cond:3_1 = var_24_3 != 1
        var_24_3 -= 1
    while (cond:3_1)
    edi_8 = arg2

int32_t i_1 = 0

if (ecx[1] s> 0)
    void* edi_10 = &edi_8[1]
    
    do
        int32_t eax_37 = arg2[*edi_10 + 0x101]
        (*((&data_632fc0)[*(edx + (eax_37 << 2) + 0x320)] + 0x18))(arg1, 
            *(*(eax_1 + 0x30) + (eax_37 << 2)), (&__saved_edi)[i_1], *(*arg1 + (i_1 << 2)))
        i_1 += 1
        edi_10 += 4
    while (i_1 s< ecx[1])

int32_t i_2 = 0

if (ecx[1] s<= 0)
    return 

do
    int32_t eax_41 = *(*arg1 + (i_2 << 2))
    sub_40a270(**(eax_1 + (arg1[7] << 2) + 0xc), eax_41, eax_41)
    i_2 += 1
while (i_2 s< ecx[1])
