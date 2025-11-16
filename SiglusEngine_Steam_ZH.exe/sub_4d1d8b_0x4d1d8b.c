// 函数: sub_4d1d8b
// 地址: 0x4d1d8b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_18 = edi
void* arg_4
void* edi_1 = arg_4
int32_t eax = *(edi_1 + 4)
int32_t var_20_1
char const* const var_1c_1
int32_t* eax_1

if (arg1[0x22] != eax)
    int32_t ecx_3 = *(*(arg1[4] + (eax << 2)) + 4)
    int32_t edx_2 = ecx_3 & 0x10
    
    if (edx_2 != 0 && (ecx_3.b & 4) != 0)
        arg_4 = 0xf
        eax_1 = nullptr
    label_4d1dff:
        var_c = eax_1
    label_4d1e32:
        void* var_8_1 = nullptr
        
        switch (*(edi_1 + 0x3c) & 0x1f0000)
            case 0x10000
                var_8_1 = 0x6000000
            case 0x20000
                var_8_1 = &data_2000000
            case 0x40000
                var_8_1 = 0x7000000
            case 0x60000
                var_8_1 = &data_4000000
            case 0x80000
                var_8_1 = &data_1000000
            case 0xa0000
                var_8_1 = &data_3000000
            case 0xc0000
                var_8_1 = 0x8000000
            case 0xe0000
                var_8_1 = "D"
            case 0x100000
                var_8_1 = 0xb000000
            case 0x180000
                var_8_1 = 0xc000000
        
        if (arg2 != 0)
            void* edx_5 = arg_4
            *arg2 = ((edx_5 | 0xfffffff8) << 0x14 | (edx_5 & 0x18)) << 8 | (eax_1 & 0x7ff) | var_8_1
        
        if (arg3 != 0)
            *arg3 = *(edi_1 + 8)
        
        if (*(edi_1 + 8) == 0xffffffff)
            return 0
        
        if (arg1[0x55] != 0)
            *(arg2 + 1) |= 0x20
            return 0
        
        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x119f, 
            "target does not support relative addressing")
        return 0x80004005
    
    if (edx_2 != 0 && (0x200 & ecx_3) == 0)
        int32_t result = (*(*arg1 + 0x88))(edi_1, &var_c, &arg_4)
        
        if (result s< 0)
            return result
        
        eax_1 = var_c
        goto label_4d1e32
    
    int32_t edx_4 = ecx_3 & 0x200
    
    if (edx_4 != 0 && (ecx_3 & 0x42080) == 0)
        int32_t* eax_3 = *(edi_1 + 0xc)
        bool cond:3_1 = eax_3 u< arg1[0xe]
        var_c = eax_3
        
        if (cond:3_1)
            if (eax_3 u< 0x800)
                arg_4 = 2
            else if (eax_3 u>= 0x1000)
                arg_4 = sbb.d(ecx_3, ecx_3, eax_3 u< 0x1800) + 0xd
            else
                arg_4 = 0xb
            
            eax_1 = eax_3 & 0x7ff
            goto label_4d1dff
        
        var_1c_1 =
            "maximum constant register index exceeded - Try reducing number of constants referenced"
        var_20_1 = 0x119b
    else if (edx_4 == 0)
    label_4d1ee2:
        
        if (ecx_3.b s< 0)
            goto label_4d1ee6
        
        if ((0x40000 & ecx_3) == 0)
            if (arg1[0x24] != *(edi_1 + 4))
                sub_4a4100(arg1, nullptr, 0, "internal error: unexpected input register type")
                return 0x80004005
            
            eax_1 = *(edi_1 + 0xc)
            bool cond:7_1 = eax_1 u< arg1[0xd]
            arg_4 = 0x13
            var_c = eax_1
            
            if (cond:7_1)
                goto label_4d1e32
            
            var_1c_1 = "maximum predicate register index exceeded"
            var_20_1 = 0x11c5
        else
            eax_1 = *(edi_1 + 0xc)
            bool cond:5_1 = eax_1 u< arg1[0x10]
            arg_4 = 7
            var_c = eax_1
            
            if (cond:5_1)
                goto label_4d1e32
            
            var_1c_1 = "maximum loop register index exceeded"
            var_20_1 = 0x1199
    else if (ecx_3.b s< 0)
    label_4d1ee6:
        eax_1 = *(edi_1 + 0xc)
        bool cond:4_1 = eax_1 u< arg1[0x13]
        arg_4 = 0xa
        var_c = eax_1
        
        if (cond:4_1)
            goto label_4d1e32
        
        var_1c_1 = "maximum sampler register index exceeded"
        var_20_1 = 0x1199
    else
        if ((ecx_3:1.b & 0x20) == 0)
            goto label_4d1ee2
        
        eax_1 = *(edi_1 + 0xc)
        bool cond:6_1 = eax_1 u< arg1[0x18]
        var_c = eax_1
        arg_4 = 0xe
        
        if (cond:6_1)
            goto label_4d1e32
        
        var_1c_1 = "maximum bool register index exceeded"
        var_20_1 = 0x1194
else
    eax_1 = *(edi_1 + 0xc)
    arg_4 = nullptr
    bool cond:1_1 = eax_1 u< arg1[0xb]
    var_c = eax_1
    
    if (cond:1_1)
        int32_t ecx_2 = arg1[0x14]
        
        if (ecx_2 != 0 && eax_1 u>= ecx_2)
            eax_1 -= ecx_2
            var_c = eax_1
            arg_4 = 3
        
        goto label_4d1e32
    
    var_1c_1 = "maximum temp register index exceeded"
    var_20_1 = 0x1199
sub_4a4100(arg1, *(arg1[0x40] + 0x3c), var_20_1, var_1c_1)
return 0x88760b59
