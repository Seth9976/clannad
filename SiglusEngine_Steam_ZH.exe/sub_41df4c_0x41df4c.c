// 函数: sub_41df4c
// 地址: 0x41df4c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xa0) != 0 && *(arg1 + 0xa4) != 0)
    void* edx_1 = *(arg1 + 0x80)
    int32_t edi
    int32_t var_38_1 = edi
    void* edi_2 = *(arg1 + 0x94) * *(arg1 + 0x64) + *(arg1 + 0x88) * *(arg1 + 0x60)
        + (*(arg1 + 0x84) << 1) + *(arg1 + 0x20)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
    *(arg1 + 0x7c) = temp0_1.d
    int32_t eax_7 = *(arg1 + 4)
    int16_t var_10_1
    
    if (eax_7 == 0x32595559)
    label_41dfd5:
        int32_t i = *(arg1 + 0x84)
        var_10_1.d = i
        
        for (; i u< *(arg1 + 0x8c); i = var_10_1.d)
            int32_t eax_15 = int.d(fconvert.t(fconvert.s(
                fconvert.t(*edx_1) * fconvert.t(65.4810028f)
                + fconvert.t(*(edx_1 + 4)) * fconvert.t(128.552994f)
                + fconvert.t(*(edx_1 + 8)) * fconvert.t(24.9659996f) + fconvert.t(0.5f)))) + 0x10
            long double x87_r7_36 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(*(edx_1 + 0x10)) * fconvert.t(65.4810028f)
                + fconvert.t(*(edx_1 + 0x18)) * fconvert.t(24.9659996f)
                + fconvert.t(*(edx_1 + 0x14)) * fconvert.t(128.552994f))) + fconvert.t(0.5f)))
            int32_t var_8_2 = int.d(x87_r7_36) + 0x10
            int32_t ebx_6 = int.d(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(*(edx_1 + 8)) * fconvert.t(112f)
                - fconvert.t(*(edx_1 + 4)) * fconvert.t(74.2030029f)
                - fconvert.t(*edx_1) * fconvert.t(37.7970009f))) + fconvert.t(0.5f)))) + 0x80
            int32_t ecx_10 = int.d(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(*edx_1) * fconvert.t(112f) - (
                fconvert.t(*(edx_1 + 4)) * fconvert.t(93.7860031f)
                + fconvert.t(*(edx_1 + 8)) * fconvert.t(18.2140007f)))) + fconvert.t(0.5f)))) + 0x80
            int32_t var_c_3 = ecx_10
            
            if (eax_15 s< 0)
                eax_15 = 0
            else if (eax_15 s> 0xff)
                eax_15 = 0xff
            
            if (var_8_2 s< 0)
                var_8_2 = 0
            else if (var_8_2 s> 0xff)
                var_8_2 = 0xff
            
            if (ebx_6 s< 0)
                ebx_6 = 0
            else if (ebx_6 s> 0xff)
                ebx_6 = 0xff
            
            if (var_c_3 s< 0)
                var_c_3 = 0
            else if (var_c_3 s> 0xff)
                var_c_3 = 0xff
            
            edx_1 += 0x20
            *edi_2 = (eax_15 << (*(arg1 + 0xa8)).b).w | (ebx_6 << (*(arg1 + 0xac)).b).w
            edi_2 += 4
            var_10_1.d += 2
            *(edi_2 - 2) = (var_8_2 << (*(arg1 + 0xa8)).b).w | (var_c_3 << (*(arg1 + 0xac)).b).w
    else if (eax_7 == 0x42475247 || eax_7 == 0x47424752)
        int32_t i_1 = *(arg1 + 0x84)
        int32_t i_2 = i_1
        
        for (; i_1 u< *(arg1 + 0x8c); i_1 = i_2)
            var_10_1.d = fconvert.s(fconvert.t(*(edx_1 + 4)) * fconvert.t(255f) + fconvert.t(0.5f))
            int32_t var_8_1 = int.d(fconvert.t(var_10_1.d))
            var_10_1.d = fconvert.s(fconvert.t(*edx_1) * fconvert.t(255f) + fconvert.t(0.5f))
            *edi_2 = (var_8_1 << (*(arg1 + 0xa8)).b).w
                | (int.d(fconvert.t(var_10_1.d)) << (*(arg1 + 0xac)).b).w
            var_10_1.d =
                fconvert.s(fconvert.t(*(edx_1 + 0x14)) * fconvert.t(255f) + fconvert.t(0.5f))
            int32_t var_18_1 = int.d(fconvert.t(var_10_1.d))
            var_10_1.d = fconvert.s(fconvert.t(*(edx_1 + 8)) * fconvert.t(255f) + fconvert.t(0.5f))
            edx_1 += 0x20
            edi_2 += 4
            i_2 += 2
            *(edi_2 - 2) = (var_18_1 << (*(arg1 + 0xa8)).b).w
                | (int.d(fconvert.t(var_10_1.d)) << (*(arg1 + 0xac)).b).w
    else if (eax_7 == 0x59565955)
        goto label_41dfd5
    int16_t x87control_1
    int16_t x87status_3
    x87control_1, x87status_3 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
    *(arg1 + 0xa0) = 0

return 0
