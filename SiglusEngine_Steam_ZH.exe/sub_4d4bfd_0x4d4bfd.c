// 函数: sub_4d4bfd
// 地址: 0x4d4bfd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t* ecx = arg2
int32_t edi
int32_t var_20 = edi

if (ecx == 0)
    ecx = *(arg1 + 0x100)
    arg2 = ecx
else
    var_8 = 1

int32_t eax = *ecx

if ((eax & 0xfff00000) != 0x20400000)
    return 1

int32_t eax_2 = eax & 0xfffff
int32_t* eax_3 = ecx[2]
int32_t ecx_1 = *(arg1 + 0x10)
int32_t* edi_3 = &eax_3[eax_2]
int32_t edx_2 = *(arg1 + 0x14)
int32_t* var_14_1

if ((*(*(ecx_1 + (*(*(edx_2 + (*edi_3 << 2)) + 4) << 2)) + 5) & 1) == 0)
    if ((*(*(ecx_1 + (*(*(edx_2 + (*eax_3 << 2)) + 4) << 2)) + 5) & 1) == 0)
        return 1
    
    var_14_1 = edi_3
else
    var_14_1 = eax_3
    eax_3 = edi_3

void* ebx_8 = *(arg1 + 0x100)
int32_t* ecx_3 = var_14_1

if (ebx_8 != arg2)
    ecx_3 = *(ebx_8 + 8)

*(arg1 + 0x15c) = 0
int32_t var_10_1 = 0

if (eax_2 u> 0)
    void* var_c_2 = eax_3 - ecx_3
    
    do
        long double x87_r7_1 = fconvert.t(1.0)
        long double x87_r6_1 = fconvert.t(*(*(edx_2 + (*(var_c_2 + ecx_3) << 2)) + 0x20))
        x87_r6_1 - x87_r7_1
        void* eax_6
        eax_6.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            return 1
        
        if (var_8 == 0 && (*(*(edx_2 + (*ecx_3 << 2)) + 0x3c) & 0x1f0000) != 0x80000)
            return 1
        
        int32_t* edi_4 = *(edx_2 + (*ecx_3 << 2))
        
        if ((*(edi_4 + 0x3d) & 2) == 0)
            int32_t eax_12
            eax_12.b = var_8 == 0
            
            if ((*edi_4 & ((eax_12 << 2) + 0x14)) == 0)
                *(arg1 + 0x15c) = 1
        
        var_10_1 += 1
        ecx_3 = &ecx_3[1]
    while (var_10_1 u< eax_2)

int32_t var_38_1
int32_t* var_34_1
int32_t var_30_1
int32_t* var_2c_1

if (var_8 == 0)
    var_2c_1 = nullptr
    var_30_1 = 0x90000
    var_34_1 = var_14_1
    var_38_1 = 0x80000
    int32_t var_3c_2 = 0x10000
else
    var_2c_1 = arg2
    var_30_1 = 0x10000
    var_34_1 = *(ebx_8 + 8)
    var_38_1 = 0
    int32_t var_3c_1 = 0x10000

int32_t result = sub_4d3501(arg1, 0x10000, var_38_1, var_34_1, var_30_1, var_2c_1, 0)

if (*(arg1 + 0x15c) == 2)
    sub_4a4195(arg1, *(*(arg1 + 0x100) + 0x3c), 0x125e, 
        "complement opportunity missed because input result WAS clamped from 0 to 1")

return result
