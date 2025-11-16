// 函数: __libm_sse2_sqrt_precise
// 地址: 0x9ad6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double var_8

if ((arg1 & 0x7f80) == 0x1f80)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    var_8.w = temp0_1
    
    if ((zx.d(var_8.w) & 0x7f) == 0x7f)
        uint32_t eax_4 = _mm_extract_epi16(arg3, 3)
        void* edx
        
        if ((eax_4 & 0x7ff0) == 0x7ff0)
            if ((eax_4 & 0xf) == 0)
                if (zx.d(_mm_extract_epi16(arg3, 2)) != 0)
                    goto label_9ad78d
                
                if (zx.d(_mm_extract_epi16(arg3, 1)) != 0)
                    goto label_9ad78d
                
                if (zx.d(_mm_extract_epi16(arg3, 0)) == 0)
                    goto label_9ad734
                
                goto label_9ad78d
            
        label_9ad78d:
            var_8 = arg3
            int32_t var_4
            var_4:2.b = arg1:2.b | 8
            edx = 0x3f5
        else
        label_9ad734:
            uint32_t eax_7 = eax_4 & 0x8000
            
            if (eax_7 == 0)
                _mm_sqrt_sd(arg3, arg3)
                return eax_7
            
            var_8 = arg3
            
            if (var_8.d == 0 && eax_4 == 0x8000)
                eax_7 = _mm_extract_epi16(arg3, 2)
                
                if (eax_7 == 0)
                    _mm_sqrt_sd(arg3, arg3)
                    return eax_7
            
            var_8.d = 0
            int32_t var_4_1 = 0xfff80000
            edx = 0x31
        
        return sub_75a7f9(&var_8, &var_8, &var_8, edx)

var_8 = arg3
int32_t eax_17
long double st0
st0, eax_17 = sub_750314()
var_8 = fconvert.d(st0)
return eax_17
