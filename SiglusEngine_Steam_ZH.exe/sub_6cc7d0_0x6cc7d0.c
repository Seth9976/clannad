// 函数: sub_6cc7d0
// 地址: 0x6cc7d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* var_8_1 = arg2
uint32_t eax_2 = zx.d(arg6[3])
uint32_t ecx_6 = (((((zx.d(*arg6) << 8) + zx.d(arg6[1])) << 8) + zx.d(arg6[2])) << 8) + eax_2
char const* const var_18_1

if (ecx_6 == arg5)
    if (arg6[8] u> 3 && (arg5.b & 3) != 0)
        sub_6cc420(eax_2, arg2, arg3, arg4, arg5, "invalid length")
        return 0
    
    eax_2 = zx.d(arg6[0x83])
    ecx_6 = (((((zx.d(arg6[0x80]) << 8) + zx.d(arg6[0x81])) << 8) + zx.d(arg6[0x82])) << 8) + eax_2
    
    if (ecx_6 u<= 0x1555554a)
        eax_2 = (ecx_6 + 0xb) * 0xc
    
    if (ecx_6 u> 0x1555554a || arg5 u< eax_2)
        var_18_1 = "tag count too large"
    else
        eax_2 = zx.d(arg6[0x43])
        ecx_6 =
            (((((zx.d(arg6[0x40]) << 8) + zx.d(arg6[0x41])) << 8) + zx.d(arg6[0x42])) << 8) + eax_2
        
        if (ecx_6 u< 0xffff)
            if (ecx_6 u>= 4)
                sub_6cc420(eax_2, nullptr, arg3, arg4, ecx_6, "intent outside defined range")
                arg2 = var_8_1
            
            uint32_t eax_11 = zx.d(arg6[0x27])
            uint32_t ecx_27 = (((((zx.d(arg6[0x24]) << 8) + zx.d(arg6[0x25])) << 8)
                + zx.d(arg6[0x26])) << 8) + eax_11
            
            if (ecx_27 != 0x61637370)
                sub_6cc420(eax_11, arg2, arg3, arg4, ecx_27, "invalid signature")
                return 0
            
            int32_t eax_12 = *(arg6 + 0x44)
            
            if (eax_12 != 0xd6f60000)
                sub_6cc420(eax_12, nullptr, arg3, arg4, 0, "PCS illuminant is not D50")
            else
                eax_12 = *(arg6 + 0x48)
                
                if (eax_12 != 0x100)
                    sub_6cc420(eax_12, nullptr, arg3, arg4, 0, "PCS illuminant is not D50")
                else
                    eax_12 = *(arg6 + 0x4c)
                    
                    if (eax_12 != 0x2dd30000)
                        sub_6cc420(eax_12, nullptr, arg3, arg4, 0, "PCS illuminant is not D50")
            
            uint32_t eax_15 = zx.d(arg6[0x13])
            uint32_t ecx_36 = (((((zx.d(arg6[0x10]) << 8) + zx.d(arg6[0x11])) << 8)
                + zx.d(arg6[0x12])) << 8) + eax_15
            
            if (ecx_36 != 0x47524159)
                if (ecx_36 != 0x52474220)
                    sub_6cc420(eax_15, var_8_1, arg3, arg4, ecx_36, 
                        "invalid ICC profile color space")
                    return 0
                
                if ((arg7 & 2) == 0)
                    sub_6cc420(eax_15, var_8_1, arg3, arg4, 0x52474220, 
                        "RGB color space not permitted on grayscale PNG")
                    return 0
            else if ((arg7 & 2) != 0)
                sub_6cc420(eax_15, var_8_1, arg3, arg4, 0x47524159, 
                    "Gray color space not permitted on RGB PNG")
                return 0
            
            uint32_t eax_18 = zx.d(arg6[0xf])
            uint32_t ecx_46 = (((((zx.d(arg6[0xc]) << 8) + zx.d(arg6[0xd])) << 8) + zx.d(arg6[0xe]))
                << 8) + eax_18
            uint32_t var_1c_5
            bool cond:1_1
            
            if (ecx_46 u<= 0x6e6d636c)
                if (ecx_46 != 0x6e6d636c)
                    if (ecx_46 == 0x61627374)
                        sub_6cc420(eax_18, var_8_1, arg3, arg4, 0x61627374, 
                            "invalid embedded Abstract ICC profile")
                        return 0
                    
                    if (ecx_46 == 0x6c696e6b)
                        sub_6cc420(eax_18, var_8_1, arg3, arg4, 0x6c696e6b, 
                            "unexpected DeviceLink ICC profile class")
                        return 0
                    
                    cond:1_1 = ecx_46 == 0x6d6e7472
                    goto label_6cca73
                
                __builtin_strncpy(&var_1c_5, "lcmn", 4)
                sub_6cc420(eax_18, nullptr, arg3, arg4, var_1c_5, 
                    "unexpected NamedColor ICC profile class")
            else if (ecx_46 != 0x70727472 && ecx_46 != 0x73636e72)
                cond:1_1 = ecx_46 == 0x73706163
            label_6cca73:
                
                if (not(cond:1_1))
                    var_1c_5 = ecx_46
                    sub_6cc420(eax_18, nullptr, arg3, arg4, var_1c_5, 
                        "unrecognized ICC profile class")
            uint32_t eax_21 = zx.d(arg6[0x17])
            uint32_t ecx_56 = (((((zx.d(arg6[0x14]) << 8) + zx.d(arg6[0x15])) << 8)
                + zx.d(arg6[0x16])) << 8) + eax_21
            
            if (ecx_56 == 0x4c616220 || ecx_56 == 0x58595a20)
                return 1
            
            sub_6cc420(eax_21, var_8_1, arg3, arg4, ecx_56, "unexpected ICC PCS encoding")
            return 0
        
        var_18_1 = "invalid rendering intent"
else
    var_18_1 = "length does not match profile"

sub_6cc420(eax_2, arg2, arg3, arg4, ecx_6, var_18_1)
return 0
