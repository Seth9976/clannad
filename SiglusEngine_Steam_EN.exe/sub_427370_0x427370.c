// 函数: sub_427370
// 地址: 0x427370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_22c
int32_t eax_1 = __security_cookie ^ &var_22c
int32_t esi = arg5
int32_t var_228 = 0
char* var_224 = nullptr

if (esi != 0)
    esi = 1

char var_218
sub_4cfd70(&var_218, arg2)

if (arg9 != 0 && data_7037e8 != 0)
    sub_419520(arg2, 1)

char* ebx_1 = &var_218
int32_t eax_3 = sub_4d1610(&var_218, 0x5c)
void var_217

if (eax_3 != 0xffffffff)
    ebx_1 = &var_217 + eax_3

int32_t eax_4 = sub_4d1610(ebx_1, 0x2e)

if (eax_4 == 0xffffffff)
    eax_4 = sub_4cfc80(ebx_1)
    ebx_1 -= 1

void* const var_23c = &data_61334c
char* eax_5 = sub_4c84d0(&ebx_1[eax_4], ".%s")
int32_t ebx_3 = data_703190:0xc
char* eax_6
char* ecx_6
eax_6, ecx_6 = sub_4c3da0(eax_5, 5, &var_218, 0xd)

if (eax_6 == 1)
    goto label_427462

void* eax_7

if (ebx_3 != 0xffffffff)
    eax_7, ecx_6 = sub_4c51f0(eax_6, &var_218, ebx_3, nullptr)

int32_t result
BOOL esi_1
BOOL eax_13
bool cond:4_1

if (ebx_3 == 0xffffffff || eax_7 == 0)
    char* ecx_21 = &var_218
    
    if (arg7 != 0)
        char* esi_7 = &var_218
        int32_t eax_36 = sub_4d1610(ecx_21, 0x5c)
        
        if (eax_36 != 0xffffffff)
            esi_7 = &var_217 + eax_36
        
        int32_t eax_37 = sub_4d1610(esi_7, 0x2e)
        
        if (eax_37 == 0xffffffff)
            eax_37 = sub_4cfc80(esi_7)
            esi_7 -= 1
        
        char* var_23c_10 = &var_218
        esi_7[eax_37] = 0
        char const* const var_240_7
        
        if (arg10 != 0)
            var_240_7 = "%s.g00 ( hik ) "
        else
            var_240_7 = "%s.g00 "
        
        char* eax_38 = sub_4c84d0(&data_7027c0, var_240_7)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_38, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            sub_4a1e40(3)
            
            if (data_702fc0 != 0 || data_641ad0 s< 6)
                MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
                data_641ad0 += 1
        else if (data_641ad0 s< 6)
            MessageBoxA(data_7027bc, &data_7027c0, 0x616ce4, MB_OK)
            data_641ad0 += 1
        
        result = 0
        esi_1 = 0
    else
        int32_t eax_20 = sub_4c3960(ecx_21, &data_613350)
        int32_t ebx_5 = data_703190:8
        int32_t eax_21
        char* ecx_23
        eax_21, ecx_23 = sub_4c3da0(eax_20, 5, &var_218, 0x19)
        void* eax_22
        
        if (eax_21 != 1 && ebx_5 != 0xffffffff)
            eax_22, ecx_23 = sub_4c51f0(eax_21, &var_218, ebx_5, nullptr)
        
        if (eax_21 == 1 || (ebx_5 != 0xffffffff && eax_22 != 0))
            char* var_23c_7 = ecx_23
            int32_t var_240_4 = 0x19
            char* edx_16 = &var_218
            
            if (arg6 == 0)
                sub_4c5400(&var_228, edx_16, data_703190:8, &var_228, &var_224, ecx_23, 0x40)
                
                if (var_228 == 0)
                    result = 0
                    esi_1 = 0
                else
                    sub_4cea50(&arg3[3], &arg3[5], var_224, &arg3[3], &arg3[4])
                    cond:4_1 = arg3[5] != 3
                label_4275a0:
                    
                    if (not(cond:4_1))
                        int32_t esi_2 = neg.d(esi)
                        arg3[5] = sbb.d(esi_2, esi_2, esi != 0) & 3
                    
                    sub_4d6c40(&var_228, &var_224)
                    result = 1
                    esi_1 = 0
            else
                sub_4c5340(&var_228, edx_16, data_703190:8, &var_228, &var_224, ecx_23)
                
                if (var_228 == 0)
                    result = 0
                    esi_1 = 0
                else
                    eax_13 = sub_4cf1e0(&arg3[1], arg3, var_224, &arg3[1], &arg3[3], &arg3[4], 
                        &arg3[5], esi)
                label_427500:
                    esi_1 = eax_13
                    sub_4d6c40(&var_228, &var_224)
                    
                    if (*arg3 == 0)
                        result = 0
                    else
                        result = 1
        else
            char* esi_5 = &var_218
            int32_t eax_23 = sub_4d1610(&var_218, 0x5c)
            
            if (eax_23 != 0xffffffff)
                esi_5 = &var_217 + eax_23
            
            int32_t eax_24 = sub_4d1610(esi_5, 0x2e)
            
            if (eax_24 == 0xffffffff)
                eax_24 = sub_4cfc80(esi_5)
                esi_5 -= 1
            
            char* var_23c_6 = &var_218
            esi_5[eax_24] = 0
            char const* const var_240_3
            
            if (arg10 != 0)
                var_240_3 = "%s.g00 ( hik ) ( pdt ) "
            else
                var_240_3 = "%s.g00 ( pdt ) "
            
            char* eax_25 = sub_4c84d0(&data_7027c0, var_240_3)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_25, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                        data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
                sub_4a1e40(3)
            
            sub_446a50()
            result = 0
            esi_1 = 0
else
    eax_6 = 2
label_427462:
    
    if (arg6 == 0)
        sub_426e50(&var_224, &var_228, &var_218, &var_224, 1, eax_6)
        
        if (var_228 != 0)
            char* ecx_19 = var_224
            
            if (ecx_19 != 0)
                arg3[5] = zx.d(*ecx_19)
                arg3[3] = zx.d(*(ecx_19 + 1))
                arg3[4] = zx.d(*(ecx_19 + 3))
            
            cond:4_1 = arg3[5] != 1
            goto label_4275a0
        
        result = 0
        esi_1 = 0
    else
        var_228 = 0
        var_224 = nullptr
        
        if (eax_6 == 2)
            result = 0
            esi_1 = 0
        else
            char* var_23c_1 = ecx_6
            int32_t var_240_1 = 0xd
            char* eax_9 = sub_4c5340(&var_228, &var_218, data_703190:0xc, &var_228, &var_224, ecx_6)
            char* ebx_4 = var_224
            char* ecx_9 = eax_9
            char* var_220_1 = ecx_9
            
            if (ebx_4 == 0)
                result = 0
                esi_1 = 0
            else
                if (*ebx_4 == 2)
                    char* var_23c_2 = ecx_9
                    sub_426d50(ebx_4)
                    ecx_9 = var_220_1
                
                int32_t eax_10 = var_228
                var_228 = eax_10
                
                if (eax_10 == 0)
                    result = 0
                    esi_1 = 0
                else
                    if (sub_426f30(eax_10, ebx_4, &var_218, ecx_9) != 0)
                        eax_13 =
                            sub_427010(&var_218, var_220_1, ebx_4, arg3, &var_218, esi, &var_218)
                        goto label_427500
                    
                    sub_4d6c40(&var_228, &var_224)
                    result = 0
                    esi_1 = 0

if (arg8 != 0)
    *arg8 = esi_1

if (*arg3 != 0 && arg4 != 0xffffffff)
    sub_4a7ee0(arg4, arg3)

sub_5f02dd(eax_1 ^ &var_22c)
return result
