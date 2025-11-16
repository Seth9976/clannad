// 函数: sub_49a655
// 地址: 0x49a655
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
char eax = (arg1[0x16]).b

if ((eax & 1) == 0)
    sub_46691d(arg1, "Missing IHDR before tRNS")
    noreturn

int32_t result

if ((eax & 4) != 0)
    sub_46693e(arg1, "Invalid tRNS after IDAT")
    result = sub_49a08a(arg1, arg3)
else if (arg2 == 0 || (*(arg2 + 8) & 0x10) == 0)
    eax = *(arg1 + 0x116)
    int32_t edi
    int32_t var_1c = edi
    
    if (eax != 3)
        char const* const var_20_9
        char var_10
        
        if (eax != 2)
            if (eax == 0)
                if (arg3 != 2)
                    goto label_49a781
                
                sub_4997a6(arg1, &var_10, 2)
                *(arg1 + 0x10a) = 1
                arg1[0x5a].w = sub_49978c(&var_10)
                goto label_49a7b0
            
            var_20_9 = "tRNS chunk not allowed with alpha channel"
        label_49a7dd:
            sub_46693e(arg1, var_20_9)
            result = sub_49a08a(arg1, arg3)
        else
            if (arg3 != 6)
            label_49a781:
                var_20_9 = "Incorrect tRNS chunk length"
                goto label_49a7dd
            
            sub_4997a6(arg1, &var_10, 6)
            *(arg1 + 0x10a) = 1
            *(arg1 + 0x162) = sub_49978c(&var_10)
            char var_e
            arg1[0x59].w = sub_49978c(&var_e)
            char var_c
            *(arg1 + 0x166) = sub_49978c(&var_c)
        label_49a7b0:
            result = sub_49a08a(arg1, 0)
            
            if (result == 0)
                result = sub_466c50(arg1, arg2, arg1[0x57], *(arg1 + 0x10a), &arg1[0x58])
    else if ((arg1[0x16].b & 2) != 0)
        if (arg3 u<= zx.d(arg1[0x42].w))
            goto label_49a6a2
        
        sub_46693e(arg1, "Incorrect tRNS chunk length")
        result = sub_49a08a(arg1, arg3)
    else
        sub_46693e(arg1, "Missing PLTE before tRNS")
    label_49a6a2:
        
        if (arg3 != 0)
            char* eax_2 = sub_498671(arg1, arg3)
            *(arg1 + 0x5d) |= 0x20
            arg1[0x57] = eax_2
            sub_4997a6(arg1, eax_2, arg3)
            *(arg1 + 0x10a) = arg3.w
            goto label_49a7b0
        
        sub_46693e(arg1, "Zero length tRNS chunk")
        result = sub_49a08a(arg1, arg3)
else
    sub_46693e(arg1, "Duplicate tRNS chunk")
    result = sub_49a08a(arg1, arg3)

sub_745f2b(__security_cookie_1)
return result
