// 函数: sub_49fa1b
// 地址: 0x49fa1b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3
int32_t eax = *(esi + 0x18)
void* ecx_1 = *(eax + (arg1 << 2))
void* eax_1 = *(eax + (arg2 << 2))
int32_t i_16 = *(eax_1 + 0x34)
int32_t i_14 = *(ecx_1 + 0x34)
int32_t edi
int32_t var_28 = edi
int32_t edi_1 = 0
arg3 = nullptr
int32_t i = i_14

if (i_14 != 0xffffffff)
    do
        i = *(*(*(esi + 0x14) + (i << 2)) + 0x14)
        edi_1 += 1
    while (i != 0xffffffff)

int32_t i_1 = i_16

if (i_16 != 0xffffffff)
    do
        i_1 = *(*(*(esi + 0x14) + (i_1 << 2)) + 0x14)
        arg3 += 1
    while (i_1 != 0xffffffff)

int32_t var_c = edi_1
void* var_1c = arg3

if (edi_1 u> arg3)
    void* i_11 = edi_1 - arg3
    void* i_2
    
    do
        i_14 = *(*(*(esi + 0x14) + (i_14 << 2)) + 0x14)
        edi_1 -= 1
        i_2 = i_11
        i_11 -= 1
    while (i_2 != 1)

if (arg3 u> edi_1)
    void* i_12 = arg3 - edi_1
    void* i_3
    
    do
        arg3 -= 1
        i_3 = i_12
        i_12 -= 1
        i_16 = *(*(*(esi + 0x14) + (i_16 << 2)) + 0x14)
    while (i_3 != 1)

if (i_14 != i_16)
    int32_t eax_6 = *(esi + 0x14)
    
    do
        i_14 = *(*(eax_6 + (i_14 << 2)) + 0x14)
        i_16 = *(*(eax_6 + (i_16 << 2)) + 0x14)
        edi_1 -= 1
        arg3 -= 1
    while (i_14 != i_16)

int32_t edx_3 = *(ecx_1 + 0x34)
int32_t ebx_6 = *(eax_1 + 0x34)
int32_t var_8 = arg1
int32_t var_10 = arg1

if (edi_1 u< var_c)
    int32_t i_10 = var_c - edi_1
    int32_t i_4
    
    do
        void* edx_4 = *(*(esi + 0x14) + (edx_3 << 2))
        int32_t eax_12 = *(edx_4 + 0x48)
        
        if (var_8 u> eax_12)
            var_8 = eax_12
        
        int32_t eax_13 = *(edx_4 + 0x58)
        
        if (var_10 u< eax_13)
            var_10 = eax_13
        
        i_4 = i_10
        i_10 -= 1
        edx_3 = *(edx_4 + 0x14)
    while (i_4 != 1)

int32_t edi_2 = arg2
int32_t var_c_1 = edi_2

if (arg3 u< var_1c)
    arg3 = var_1c - arg3
    void* i_5
    
    do
        void* ecx_5 = *(*(esi + 0x14) + (ebx_6 << 2))
        int32_t eax_16 = *(ecx_5 + 0x48)
        
        if (edi_2 u> eax_16)
            edi_2 = eax_16
        
        int32_t eax_17 = *(ecx_5 + 0x58)
        
        if (var_c_1 u< eax_17)
            var_c_1 = eax_17
        
        i_5 = arg3
        arg3 -= 1
        ebx_6 = *(ecx_5 + 0x14)
    while (i_5 != 1)

if ((arg1 u< edi_2 || arg1 u> var_c_1) && (arg2 u< var_8 || arg2 u> var_10))
label_49fb7b:
    int32_t ecx_6 = *(esi + 0x14)
    void* edx_6 = *(ecx_6 + (**(ecx_1 + 0x10) << 2))
    void* ecx_7 = *(ecx_6 + (**(eax_1 + 0x10) << 2))
    int32_t edi_3 = *(edx_6 + 0x18)
    int32_t i_17 = *(edx_6 + 0x14)
    int32_t var_10_1 = 0
    arg3 = nullptr
    int32_t i_15 = *(ecx_7 + 0x14)
    int32_t i_6 = i_17
    
    if (i_17 != 0xffffffff)
        do
            i_6 = *(*(*(esi + 0x14) + (i_6 << 2)) + 0x14)
            var_10_1 += 1
        while (i_6 != 0xffffffff)
    
    int32_t i_7 = i_15
    
    if (i_15 != 0xffffffff)
        do
            i_7 = *(*(*(esi + 0x14) + (i_7 << 2)) + 0x14)
            arg3 += 1
        while (i_7 != 0xffffffff)
    
    int32_t ebx_9 = var_10_1
    
    if (ebx_9 u> arg3)
        void* i_13 = ebx_9 - arg3
        void* i_8
        
        do
            void* edx_7 = *(*(esi + 0x14) + (i_17 << 2))
            edi_3 = *(edx_7 + 0x18)
            i_17 = *(edx_7 + 0x14)
            ebx_9 -= 1
            i_8 = i_13
            i_13 -= 1
        while (i_8 != 1)
    
    int32_t eax_33
    
    if (arg3 u<= ebx_9)
        eax_33 = *(ecx_7 + 0x18)
    else
        void* i_18 = arg3 - ebx_9
        void* i_9
        
        do
            i_9 = i_18
            i_18 -= 1
            void* ecx_8 = *(*(esi + 0x14) + (i_15 << 2))
            eax_33 = *(ecx_8 + 0x18)
            i_15 = *(ecx_8 + 0x14)
        while (i_9 != 1)
    
    if (i_17 != i_15)
        int32_t esi_1 = *(esi + 0x14)
        
        do
            void* edx_8 = *(esi_1 + (i_17 << 2))
            void* ecx_9 = *(esi_1 + (i_15 << 2))
            edi_3 = *(edx_8 + 0x18)
            eax_33 = *(ecx_9 + 0x18)
            i_17 = *(edx_8 + 0x14)
            i_15 = *(ecx_9 + 0x14)
        while (i_17 != i_15)
    
    if (edi_3 == 0)
        if (eax_33 != 0)
            return 1
        
    label_49fc44:
        bool c_1 = arg2 u< arg1
        
        if (arg2 == arg1 || c_1)
            return neg.d(sbb.d(arg1, arg1, c_1))
    else if (eax_33 != 0)
        goto label_49fc44
else
    if (var_8 u< edi_2)
        return 1
    
    if (var_8 u<= edi_2)
        goto label_49fb7b

return 0xffffffff
