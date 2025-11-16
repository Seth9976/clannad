// 函数: sub_407900
// 地址: 0x407900
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
float ebx = 0f
__builtin_memset(esi, 0, 0x2c)
int32_t* edi_2 = arg2
int32_t i_6 = edi_2[1]

if (i_6 s> 0)
    int32_t* ecx_1 = edi_2[2]
    int32_t i_5 = i_6
    int32_t i
    
    do
        if (*ecx_1 s> 0)
            ebx += 1
        
        ecx_1 = &ecx_1[1]
        i = i_5
        i_5 -= 1
    while (i != 1)

esi[1] = i_6
esi[2] = ebx
*esi = *edi_2
int32_t* eax_1 = sub_407370(edi_2[2], edi_2[1], ebx)
int32_t eax_2 = ebx << 2
int32_t eax_3
eax_3.b = (eax_2 + 3).b & 0xfc
__chkstk(eax_3)
int32_t __saved_edi
int32_t* eax_4 = &__saved_edi
int32_t* var_14 = &__saved_edi

if (eax_1 == 0)
    sub_407840(esi)
    return 0xffffffff

if (ebx s> 0)
    arg1 = eax_1
    float var_c_1 = ebx
    bool cond:1_1
    
    do
        *arg1 = sub_407cd0(*arg1)
        *(&__saved_edi - eax_1 + arg1) = arg1
        cond:1_1 = var_c_1 != 1
        arg1 = &arg1[1]
        var_c_1 -= 1
    while (cond:1_1)
    eax_4 = var_14

sub_5f02f0(eax_4, ebx, 4, sub_407d30)
int32_t eax_12
eax_12.b = (eax_2 + 3).b & 0xfc
__chkstk(eax_12)
arg1 = &__saved_edi
esi[5] = _malloc(eax_2)
int32_t eax_15 = 0

if (ebx s> 0)
    int32_t* var_c_2 = var_14
    
    do
        arg1[(*var_c_2 - eax_1) s>> 2] = eax_15
        eax_15 += 1
        var_c_2 = &var_c_2[1]
    while (eax_15 s< ebx)
    
    if (ebx s> 0)
        int32_t* eax_16 = arg1
        int32_t* ecx_12 = eax_1 - eax_16
        float var_14_1 = ebx
        int32_t* var_18_2 = ecx_12
        
        while (true)
            int32_t edx_8 = *eax_16
            int32_t ecx_13 = *(ecx_12 + eax_16)
            eax_16 = &eax_16[1]
            *(esi[5] + (edx_8 << 2)) = ecx_13
            bool cond:5_1 = var_14_1 != 1
            var_14_1 -= 1
            
            if (not(cond:5_1))
                break
            
            ecx_12 = var_18_2
        
        edi_2 = arg2

_free(eax_1)
esi[4] = sub_407560(edi_2, ebx, arg1)
esi[6] = _malloc(eax_2)
uint32_t ecx_17 = 0
int32_t i_1 = 0

if (edi_2[1] s> 0)
    arg2 = arg1
    
    do
        if (*(edi_2[2] + (i_1 << 2)) s> 0)
            ecx_17 += 1
            *(esi[6] + (*arg2 << 2)) = i_1
            arg2 = &arg2[1]
        
        i_1 += 1
    while (i_1 s< edi_2[1])

int32_t eax_20
void* edx_18
eax_20, edx_18 = _malloc(ecx_17)
esi[7] = eax_20
int32_t i_2 = 0
arg2 = nullptr

if (edi_2[1] s> 0)
    do
        int32_t edx_19 = edi_2[2]
        edx_18 = *(edx_19 + (i_2 << 2))
        
        if (edx_18 s> 0)
            char* eax_23
            eax_23.b = *(edx_19 + (i_2 << 2))
            esi[7][*arg1] = eax_23.b
            edx_18 = arg2 + 1
            arg2 = edx_18
            arg1 = &arg1[1]
        
        i_2 += 1
    while (i_2 s< edi_2[1])

int32_t eax_28 = sub_40c650(esi[2]) - 4
esi[9] = eax_28

if (eax_28 s< 5)
    esi[9] = 5

if (esi[9] s> 8)
    esi[9] = 8

int32_t ecx_20 = esi[9]
int32_t edi_3 = 1 << ecx_20.b
int32_t var_14_2 = edi_3
esi[8] = sub_5f1ac0(8, edx_18, ecx_20, edi_3, 4)
int32_t ebx_4 = 0
esi[0xa] = 0

if (arg2 s> 0)
    do
        void* edx_22 = esi[7]
        int32_t eax_31 = sx.d(*(edx_22 + ebx_4))
        
        if (esi[0xa] s< eax_31)
            esi[0xa] = eax_31
        
        if (sx.d(*(edx_22 + ebx_4)) s<= esi[9])
            int32_t* eax_33 = sub_407cd0(*(esi[5] + (ebx_4 << 2)))
            int32_t i_3 = 0
            char edx_25 = esi[7][ebx_4]
            
            if (1 << ((esi[9]).b - edx_25) s> 0)
                do
                    int32_t eax_38 = i_3 << edx_25 | eax_33
                    i_3 += 1
                    *(esi[8] + (eax_38 << 2)) = ebx_4 + 1
                    edx_25 = esi[7][ebx_4]
                while (i_3 s< 1 << ((esi[9]).b - edx_25))
            
            edi_3 = var_14_2
        
        ebx_4 += 1
    while (ebx_4 s< arg2)

int32_t eax_43 = 0xfffffffe << (0x1f - (esi[9]).b)
int32_t* ebx_6 = nullptr
arg1 = nullptr
int32_t var_8_1 = 0
int32_t var_10_1 = 0

if (edi_3 s> 0)
    bool cond:8_1
    
    do
        int32_t i_4 = var_10_1 << (0x20 - (esi[9]).b)
        int32_t eax_44 = sub_407cd0(i_4)
        
        if (*(esi[8] + (eax_44 << 2)) == 0)
            void* eax_45 = ebx_6 + 1
            
            if (eax_45 s< arg2)
                int32_t* ecx_33 = esi[5] + (eax_45 << 2)
                
                while (*ecx_33 u<= i_4)
                    ebx_6 += 1
                    eax_45 += 1
                    ecx_33 = &ecx_33[1]
                    
                    if (eax_45 s>= arg2)
                        break
                
                arg1 = ebx_6
            
            if (var_8_1 s< arg2)
                int32_t* eax_47 = esi[5] + (var_8_1 << 2)
                
                while (i_4 u>= (*eax_47 & eax_43))
                    eax_47 = &eax_47[1]
                    bool cond:9_1 = var_8_1 + 1 s< arg2
                    var_8_1 += 1
                    
                    if (not(cond:9_1))
                        break
                
                ebx_6 = arg1
            
            void* eax_49 = arg2 - var_8_1
            
            if (arg1 u> 0x7fff)
                ebx_6 = 0x7fff
            
            if (eax_49 u> 0x7fff)
                eax_49 = 0x7fff
            
            int32_t eax_50 = sub_407cd0(i_4)
            *(esi[8] + (eax_50 << 2)) = (ebx_6 | 0xffff0000) << 0xf | eax_49
            ebx_6 = arg1
        
        cond:8_1 = var_10_1 + 1 s< var_14_2
        var_10_1 += 1
    while (cond:8_1)

return 0
