// 函数: sub_6e8f50
// 地址: 0x6e8f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0 || arg2 == 0)
    return 0xffffffff

int32_t ecx = arg2[1]

if (ecx != 0)
    int32_t eax = *arg2
    __builtin_memset(&arg3[0x3279], 0, 0x14)
    arg3[0x327a] = eax
    arg3[0x3279] = eax + ecx
    int32_t result = sub_6e5750(arg3)
    
    if (result s< 0)
        return result
    
    if (arg3[0xe4].b != 0)
        sub_6e5d90(arg3)
    else
        sub_6e5910(arg3)
else
    arg3[0xe4].b = 1
    arg3[0x44] = ecx

if (arg3[0xe4].b != 0 && (arg3[0x45] s< 0 || arg3[0x46] s< 0))
    sub_6e8ea0(arg3)

if (arg3[0x44] s<= 0)
    int32_t ebx_1 = arg3[0xde]
    int32_t edi_1 = arg3[0xdf]
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(zx.d(*(arg3 + 0x391)))
    int32_t eax_5
    int32_t edx_2
    eax_5, edx_2 = __allshl(eax_3 + ebx_1, adc.d(edx, edi_1, eax_3 + ebx_1 u< eax_3), (arg3[0xf]).b)
    int32_t ecx_5 = arg3[0xe1]
    int32_t eax_6 = eax_5 - ebx_1
    int32_t ebx_2 = arg3[0xe0]
    int32_t eax_7 = eax_6 + ebx_2
    arg3[0xe2] = eax_7
    arg3[0xe3] = adc.d(sbb.d(edx_2, edi_1, eax_5 u< ebx_1), ecx_5, eax_6 + ebx_2 u< eax_6)
    arg3[0xe0] = ebx_2 + 1
    arg3[0xe1] = adc.d(ecx_5, 0, ebx_2 u>= 0xffffffff)
    
    if (arg4 != 0)
        *arg4 = eax_7
        arg4[1] = arg3[0xe3]
    
    return 1

void* i = nullptr

while (i == arg3[0x45] || i == arg3[0x46])
    i += 1

arg3[0x47] = i

if (arg3[0xe4].b != 0)
    sub_6e5fd0(arg3)
    sub_6e6120(arg3)
else
    arg3[0xde] = arg3[0xe0]
    arg3[0xdf] = arg3[0xe1]

sub_6e64b0(arg3)
sub_6e6ca0(arg3)
int32_t ebx_4 = arg3[0xde]
int32_t edi_2 = arg3[0xdf]
int32_t eax_12
int32_t edx_6
edx_6:eax_12 = sx.q(zx.d(*(arg3 + 0x391)))
int32_t eax_14
int32_t edx_8
eax_14, edx_8 =
    __allshl(eax_12 + ebx_4, adc.d(edx_6, edi_2, eax_12 + ebx_4 u< eax_12), (arg3[0xf]).b)
int32_t ecx_14 = arg3[0xe1]
int32_t eax_15 = eax_14 - ebx_4
int32_t ebx_5 = arg3[0xe0]
int32_t eax_16 = eax_15 + ebx_5
arg3[0xe2] = eax_16
arg3[0xe3] = adc.d(sbb.d(edx_8, edi_2, eax_14 u< ebx_4), ecx_14, eax_15 + ebx_5 u< eax_15)
arg3[0xe0] = ebx_5 + 1
arg3[0xe1] = adc.d(ecx_14, 0, ebx_5 u>= 0xffffffff)

if (arg4 != 0)
    *arg4 = eax_16
    arg4[1] = arg3[0xe3]

sub_6e7140(arg3, &arg3[0x34e4])
void var_60
sub_6ec090(&var_60, &arg3[0x34d6])
int32_t ecx_19 = 0
int32_t var_10 = 0
int32_t var_28 = 0
void* ebx_7 = &arg3[0x37c5]
int32_t* eax_18 = &arg3[0x1d]
int32_t i_1

do
    int32_t edx_13 = *eax_18
    int32_t var_24_1 = edx_13
    int32_t var_20_1 = edx_13
    void* var_8_1 = ebx_7
    i_1.b = arg3[0x37d1] + ecx_19 s< edx_13
    void* var_1c_1 = &arg3[0x1d]
    int32_t j = 0
    int32_t j_1 = 0
    
    do
        char ecx_20
        
        if (j == 0 || (arg3[0xc].b & 2) != 0)
            ecx_20 = 0
        else
            ecx_20 = 1
        
        int32_t edx_15 = var_28 s>> ecx_20
        *(ebx_7 - 0xc) = edx_15
        int32_t edx_16 = edx_15 + (arg3[0x37d1] s>> ecx_20)
        int32_t eax_25 = *var_1c_1
        int32_t ecx_21
        ecx_21.b = edx_16 s< eax_25
        *ebx_7 = (neg.d(ecx_21) & (edx_16 - eax_25)) + eax_25
        sub_6e76c0(sub_6e7340(eax_25, &arg3[0x34e4], arg3, j), &arg3[0x34e4], arg3, j)
        int32_t ebx_8 = 0
        int32_t i_3 = 0
        
        if (arg3[0x37d2] != 0)
            i_3 = i_1
            ebx_8 = var_10
            arg3[0x18](arg3, &arg3[0x3524], i, j_1, *(var_8_1 - 0xc) - ebx_8, *var_8_1 - i_3)
        
        int32_t eax_34 = ebx_8 * 2
        sub_6eb2e0(eax_34, i, arg3, j_1, ((*(var_8_1 - 0xc) - ebx_8) << 3) - eax_34, 
            ((*var_8_1 - i_3) << 3) - i_3 * 2)
        void* j_2 = j_1
        int32_t eax_35
        eax_35.b = j_2 != 0
        int32_t eax_36 = eax_35 * 3
        
        if (arg3[0x37d3] s>= eax_36 + 2)
            i_3 += i_1
            ebx_8 += var_10
            void* eax_46 = i * 0x30 + 0x12c + arg3
            sub_6e7e30(eax_46, &arg3[0x34d6], arg3, eax_46, j_2, *(var_8_1 - 0xc) - ebx_8, 
                *var_8_1 - i_3)
            
            if (arg3[0x37d3] s>= eax_36 + 3)
                i_3 += i_1
                ebx_8 += var_10
                char* eax_52 = *(var_8_1 - 0xc) - ebx_8
                sub_6e8b20(eax_52, &arg3[0x34d6], arg3, j_1, eax_52, *var_8_1 - i_3)
        else if (arg3[0x37d2] != 0)
            ebx_8 += var_10
            i_3 += i_1
        
        int32_t edx_27 = (*(var_8_1 - 0xc) - ebx_8) << ecx_20
        int32_t eax_53
        eax_53.b = edx_27 s< var_20_1
        var_20_1 += neg.d(eax_53) & (edx_27 - var_20_1)
        int32_t edx_31 = (*var_8_1 - i_3) << ecx_20
        int32_t eax_56
        eax_56.b = edx_31 s< var_24_1
        var_1c_1 += 0x20
        j = j_1 + 1
        j_1 = j
        ebx_7 = var_8_1 + 4
        var_24_1 += neg.d(eax_56) & (edx_31 - var_24_1)
        var_8_1 = ebx_7
    while (j s< 3)
    
    if (arg3[0x34e3] != 0)
        arg3[0x19]()
        int32_t ecx_44 = arg3[0x1d]
        arg3[0x34e3](arg3[0x34e2], &var_60, ecx_44 - var_24_1, ecx_44 - var_20_1)
    
    eax_18 = &arg3[0x1d]
    ecx_19 = var_28 + arg3[0x37d1]
    ebx_7 = &arg3[0x37c5]
    var_10 = 1
    var_28 = ecx_19
while (i_1 != 0)

for (int32_t* i_2 = nullptr; i_2 s< 3; i_2 += 1)
    eax_18 = sub_6eb390(eax_18, i, arg3, i_2)

int32_t eax_63 = arg3[0x47]
bool cond:5 = arg3[0xe4].b != 0
arg3[0x46] = eax_63

if (not(cond:5))
    arg3[0x45] = eax_63

arg3[0x19]()
return 0
