// 函数: sub_49a571
// 地址: 0x49a571
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
char eax = (esi[0x16]).b

if ((eax & 1) == 0)
    sub_46691d(esi, "Missing IHDR before sRGB")
    noreturn

char const* const var_c_1

if ((eax & 4) != 0)
    var_c_1 = "Invalid sRGB after IDAT"
else if ((eax & 2) == 0)
    if (arg2 == 0 || (*(arg2 + 9) & 8) == 0)
        goto label_49a58c
    
    var_c_1 = "Duplicate sRGB chunk"
else
    sub_46693e(esi, "Out of place sRGB chunk")
label_49a58c:
    
    if (arg3 == 1)
        sub_4997a6(esi, &arg1:3, 1)
        int32_t result = sub_49a08a(esi, 0)
        
        if (result == 0)
            int32_t edi
            int32_t var_c_3 = edi
            uint32_t edi_1 = zx.d(arg1:3.b)
            
            if (edi_1 s< 4)
                if ((*(arg2 + 8) & 1) != 0)
                    long double x87_r7_5 = fabs(fconvert.t(esi[0x4c]) * fconvert.t(100000f)
                        + fconvert.t(0.5) - fconvert.t(45455.0))
                    long double temp1_1 = fconvert.t(500.0)
                    x87_r7_5 - temp1_1
                    void* eax_2
                    eax_2.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe
                    
                    if ((eax_2:1.b & 0x41) == 0)
                        sub_46693e(esi, "Ignoring incorrect gAMA value when sRGB is also present")
                
                result = sub_466c17(esi, arg2, edi_1.b)
            else
                result = sub_46693e(esi, "Unknown sRGB intent")
        
        return result
    
    var_c_1 = "Incorrect sRGB chunk length"

sub_46693e(esi, var_c_1)
return sub_49a08a(esi, arg3)
