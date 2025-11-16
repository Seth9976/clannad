// 函数: sub_49a46e
// 地址: 0x49a46e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
char eax = (esi[0x16]).b
int32_t edi
int32_t var_10 = edi

if ((eax & 1) == 0)
    sub_46691d(esi, "Missing IHDR before gAMA")
    noreturn

char const* const var_14_1

if ((eax & 4) != 0)
    var_14_1 = "Invalid gAMA after IDAT"
else if ((eax & 2) == 0)
    if (arg2 == 0)
        goto label_49a493
    
    int32_t eax_1 = *(arg2 + 8)
    
    if ((eax_1.b & 1) == 0 || (0x800 & eax_1) != 0)
        goto label_49a493
    
    var_14_1 = "Duplicate gAMA chunk"
else
    sub_46693e(esi, "Out of place gAMA chunk")
label_49a493:
    
    if (arg3 == 4)
        sub_4997a6(esi, &arg1, 4)
        uint32_t result = sub_49a08a(esi, 0)
        
        if (result == 0)
            result = sub_499762(&arg1)
            uint32_t result_1 = result
            
            if (result_1 != 0)
                if ((*(arg2 + 8) & 0x800) != 0)
                    long double x87_r7_1 = float.t(result_1)
                    
                    if (result_1 s< 0)
                        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                    
                    long double x87_r7_3 = fabs(x87_r7_1 - fconvert.t(45455.0))
                    long double temp1_1 = fconvert.t(500.0)
                    x87_r7_3 - temp1_1
                    result.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe
                    
                    if ((result:1.b & 0x41) == 0)
                        return sub_46693e(esi, 
                            "Ignoring incorrect gAMA value when sRGB is also present")
                
                long double x87_r7_4 = float.t(result_1)
                
                if (result_1 s< 0)
                    x87_r7_4 = x87_r7_4 + fconvert.t(4.2949673e+09f)
                
                long double x87_r7_5 = x87_r7_4 * fconvert.t(9.99999975e-06f)
                uint32_t result_3 = result_1
                uint32_t result_2 = result_1
                esi[0x4c] = fconvert.s(x87_r7_5)
                result_2.q = fconvert.d(x87_r7_5)
                return sub_466b0c(esi, arg2, result_2)
        
        return result
    
    var_14_1 = "Incorrect gAMA chunk length"

sub_46693e(esi, var_14_1)
return sub_49a08a(esi, arg3)
