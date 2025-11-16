// 函数: sub_6b5e10
// 地址: 0x6b5e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb1cc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_310 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_2f8 = 0
int32_t var_30
int16_t* eax_4 = sub_5327a0(arg2, &arg1[6], &var_30, arg2)
int32_t var_8_1 = 0
int32_t* lpFileName_1
sub_532b80(eax_4, eax_4, &lpFileName_1, 0xafa254)
var_8_1.b = 2
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30)

int32_t* lpFileName = &lpFileName_1
int32_t var_5c

if (var_5c u>= 8)
    lpFileName = lpFileName_1

WIN32_FIND_DATAW findFileData
HANDLE hFindFile = FindFirstFileW(lpFileName, &findFileData)
HANDLE hFindFile_1 = hFindFile

if (hFindFile != 0xffffffff)
    while (true)
        void* const ecx_2 = &data_ad7d2c
        var_2c4
        void* eax_5 = &var_2c4
        int32_t eax_7
        int16_t edx_2
        
        while (true)
            edx_2 = *eax_5
            int16_t temp1_1 = *ecx_2
            bool c_1 = edx_2 u< temp1_1
            
            if (edx_2 == temp1_1)
                if (edx_2 == 0)
                    eax_7 = 0
                    break
                
                edx_2 = *(eax_5 + 2)
                int16_t temp2_1 = *(ecx_2 + 2)
                c_1 = edx_2 u< temp2_1
                
                if (edx_2 == temp2_1)
                    eax_5 += 4
                    ecx_2 += 4
                    
                    if (edx_2 != 0)
                        continue
                    
                    eax_7 = 0
                    break
            
            eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
            break
        
        if (eax_7 != 0)
            void* const eax_8 = &data_b0067c
            void* ecx_3 = &var_2c4
            int32_t eax_10
            
            while (true)
                edx_2 = *ecx_3
                int16_t temp3_1 = *eax_8
                bool c_2 = edx_2 u< temp3_1
                
                if (edx_2 == temp3_1)
                    if (edx_2 == 0)
                        eax_10 = 0
                        break
                    
                    edx_2 = *(ecx_3 + 2)
                    int16_t temp4_1 = *(eax_8 + 2)
                    c_2 = edx_2 u< temp4_1
                    
                    if (edx_2 == temp4_1)
                        ecx_3 += 4
                        eax_8 += 4
                        
                        if (edx_2 != 0)
                            continue
                        
                        eax_10 = 0
                        break
                
                eax_10 = sbb.d(eax_8, eax_8, c_2) | 1
                break
            
            if (eax_10 != 0)
                int32_t var_44_1 = 7
                int32_t var_48_1 = 0
                int16_t var_58 = 0
                int64_t var_38_1 = 0
                var_8_1.b = 3
                bool cond:1_1 = (findFileData.dwFileAttributes.b & 0x10) u> 0
                int16_t* eax_12 = sub_532b80(&var_2c4, arg2, &var_30, &var_2c4)
                var_8_1.b = 4
                
                if (&var_58 != eax_12)
                    sub_52e3c0(&var_58, eax_12, 0, 0xffffffff)
                
                var_8_1.b = 3
                
                if (var_1c u>= 8)
                    j__free(var_30)
                
                struct _EXCEPTION_REGISTRATION_RECORD** nFileSizeLow = findFileData.nFileSizeLow
                var_38_1.d = nFileSizeLow
                int32_t ecx_7 = adc.d(findFileData.nFileSizeHigh, 0, findFileData.nFileSizeLow u< 0)
                int32_t temp7_1 = arg1[4]
                arg1[4] += nFileSizeLow
                var_38_1:4.d = ecx_7
                arg1[5] = adc.d(arg1[5], ecx_7, temp7_1 + nFileSizeLow u< temp7_1)
                
                if (cond:1_1 != 0)
                    if (*(arg1 + 0x62) != 0)
                        nFileSizeLow = sub_6b6e00(arg1, &var_58)
                    
                    if (arg1[0x18].b != 0)
                        var_8_1.b = 5
                        sub_6b5e10(sub_532b80(nFileSizeLow, &var_58, &var_30, &data_ad900c))
                        
                        if (var_1c u>= 8)
                            j__free(var_30)
                else if (*(arg1 + 0x61) != 0)
                    char eax_14 = sub_5ccf10(&arg1[0xc], 0xafa254)
                    char var_2f1_1
                    void var_a0
                    void var_88
                    int32_t eax_18
                    
                    if (eax_14 == 0)
                        var_8_1.b = 6
                        int32_t ebx_1 = ebx | 1
                        int32_t var_2f8_1 = ebx_1
                        int16_t* esi = sub_6ae650(&var_88, sub_6b4150(&var_a0, &var_58))
                        int32_t var_8_2 = 7
                        int32_t ebx_2 = ebx_1 | 2
                        int32_t var_2f8_2 = ebx_2
                        int16_t* eax_17 = sub_6ae650(&var_30, &arg1[0xc])
                        int32_t var_8_3 = 8
                        ebx = ebx_2 | 4
                        int32_t ecx_15 = *(esi + 0x10)
                        int32_t var_2f8_3 = ebx
                        
                        if (*(esi + 0x14) u>= 8)
                            esi = *esi
                        
                        int32_t var_314_8 = ecx_15
                        eax_18 = sub_536340(eax_17, ecx_15, *(eax_17 + 0x10), esi)
                        var_2f1_1 = 0
                    
                    if (eax_14 != 0 || eax_18 == 0)
                        var_2f1_1 = 1
                    
                    if ((ebx.b & 4) != 0)
                        ebx &= 0xfffffffb
                        sub_52e8a0(&var_30)
                    
                    if ((ebx.b & 2) != 0)
                        ebx &= 0xfffffffd
                        sub_52e8a0(&var_88)
                    
                    var_8_1 = 3
                    
                    if ((ebx.b & 1) != 0)
                        ebx &= 0xfffffffe
                        sub_52e8a0(&var_a0)
                    
                    if (var_2f1_1 != 0)
                        char eax_19 = sub_5ccf10(&arg1[0x12], 0xafa254)
                        char var_2f1_2
                        char eax_23
                        
                        if (eax_19 == 0)
                            var_8_1.b = 9
                            int32_t ebx_3 = ebx | 8
                            int32_t var_2f8_4 = ebx_3
                            void** eax_21 = sub_6ae650(&var_88, sub_6b3f00(&var_30, &var_58))
                            int32_t var_8_4 = 0xa
                            int32_t ebx_4 = ebx_3 | 0x10
                            int32_t var_2f8_5 = ebx_4
                            ebx = ebx_4 | 0x20
                            eax_23 = sub_535c60(sub_6ae650(&var_a0, &arg1[0x12]), eax_21)
                            var_2f1_2 = 0
                        
                        if (eax_19 != 0 || eax_23 != 0)
                            var_2f1_2 = 1
                        
                        if ((ebx.b & 0x20) != 0)
                            ebx &= 0xffffffdf
                            sub_52e8a0(&var_a0)
                        
                        if ((ebx.b & 0x10) != 0)
                            ebx &= 0xffffffef
                            sub_52e8a0(&var_88)
                        
                        var_8_1 = 3
                        
                        if ((ebx.b & 8) != 0)
                            ebx &= 0xfffffff7
                            sub_52e8a0(&var_30)
                        
                        if (var_2f1_2 != 0)
                            sub_6b6e00(arg1, &var_58)
                    
                    hFindFile = hFindFile_1
                
                var_8_1.b = 2
                
                if (var_44_1 u>= 8)
                    j__free(var_58.d)
        
        if (FindNextFileW(hFindFile, &findFileData) == 0)
            break
    
    FindClose(hFindFile)

if (var_5c u>= 8)
    j__free(lpFileName_1)

HANDLE result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
