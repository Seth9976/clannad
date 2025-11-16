// 函数: sub_6520c0
// 地址: 0x6520c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3f60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
PWSTR lpFileName

if (arg1[5] u< 8)
    lpFileName = arg1
else
    lpFileName = *arg1

enum FILE_FLAGS_AND_ATTRIBUTES dwFileAttributes = GetFileAttributesW(lpFileName) & 0xfffffffe
PWSTR lpFileName_1

if (arg1[5] u< 8)
    lpFileName_1 = arg1
else
    lpFileName_1 = *arg1

SetFileAttributesW(lpFileName_1, dwFileAttributes)
char eax_4 = sub_6b8570(arg1, arg2)

if (eax_4 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

Sleep(0)
int32_t* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_8_1 = 0
char eax_5 = sub_6b7be0(arg1, &var_28)
int32_t* esi = var_28
int32_t* ebx

if (eax_5 == 0)
    ebx.b = 0
else
    void* edx_3 = var_24 - esi
    int32_t* ecx_4 = *arg2
    
    if (edx_3 != arg2[1] - ecx_4)
    label_6521f1:
        sub_6b4cb0(arg1)
        
        if (sub_6b8570(arg1, arg2) == 0)
            ebx.b = 0
        else
            int32_t* var_1c = nullptr
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            var_8_1.b = 1
            
            if (sub_6b7be0(arg1, &var_1c) == 0)
                sub_538150(&var_1c)
                ebx.b = 0
            else
                int32_t* edx_6 = *arg2
                int32_t* ecx_8 = var_1c
                void* esi_2 = var_18_1 - ecx_8
                
                if (esi_2 != arg2[1] - edx_6)
                label_6522a5:
                    sub_6b4cb0(arg1)
                    sub_538150(&var_1c)
                    ebx.b = 0
                else
                    if (edx_6 == arg2[1])
                        edx_6 = nullptr
                    
                    if (ecx_8 == var_18_1)
                        ecx_8 = nullptr
                    
                    void* i_3 = esi_2 - 4
                    
                    if (esi_2 u>= 4)
                        void* i
                        
                        do
                            if (*ecx_8 != *edx_6)
                                goto label_65226a
                            
                            ecx_8 = &ecx_8[1]
                            edx_6 = &edx_6[1]
                            i = i_3
                            i_3 -= 4
                        while (i u>= 4)
                    
                    if (i_3 == 0xfffffffc)
                        sub_538150(&var_1c)
                        ebx.b = 1
                    else
                    label_65226a:
                        int32_t eax_14
                        eax_14.b = *ecx_8
                        
                        if (eax_14.b != *edx_6)
                            goto label_6522a5
                        
                        if (i_3 == 0xfffffffd)
                            sub_538150(&var_1c)
                            ebx.b = 1
                        else
                            eax_14.b = *(ecx_8 + 1)
                            
                            if (eax_14.b != *(edx_6 + 1))
                                goto label_6522a5
                            
                            if (i_3 == 0xfffffffe)
                                sub_538150(&var_1c)
                                ebx.b = 1
                            else
                                eax_14.b = *(ecx_8 + 2)
                                
                                if (eax_14.b != *(edx_6 + 2))
                                    goto label_6522a5
                                
                                if (i_3 == 0xffffffff)
                                    sub_538150(&var_1c)
                                    ebx.b = 1
                                else
                                    eax_14.b = *(ecx_8 + 3)
                                    
                                    if (eax_14.b != *(edx_6 + 3))
                                        goto label_6522a5
                                    
                                    sub_538150(&var_1c)
                                    ebx.b = 1
    else
        if (ecx_4 == arg2[1])
            ecx_4 = nullptr
        
        if (esi == var_24)
            esi = nullptr
        
        void* i_2 = edx_3 - 4
        
        if (edx_3 u>= 4)
            void* i_1
            
            do
                if (*esi != *ecx_4)
                    goto label_6521b2
                
                esi = &esi[1]
                ecx_4 = &ecx_4[1]
                i_1 = i_2
                i_2 -= 4
            while (i_1 u>= 4)
        
        if (i_2 == 0xfffffffc)
            ebx.b = 1
        else
        label_6521b2:
            int32_t eax_9
            eax_9.b = *esi
            
            if (eax_9.b != *ecx_4)
                goto label_6521f1
            
            if (i_2 == 0xfffffffd)
                ebx.b = 1
            else
                eax_9.b = *(esi + 1)
                
                if (eax_9.b != *(ecx_4 + 1))
                    goto label_6521f1
                
                if (i_2 == 0xfffffffe)
                    ebx.b = 1
                else
                    eax_9.b = *(esi + 2)
                    
                    if (eax_9.b != *(ecx_4 + 2))
                        goto label_6521f1
                    
                    if (i_2 == 0xffffffff)
                        ebx.b = 1
                    else
                        eax_9.b = *(esi + 3)
                        
                        if (eax_9.b != *(ecx_4 + 3))
                            goto label_6521f1
                        
                        ebx.b = 1

int32_t* eax_15 = var_28

if (eax_15 != 0)
    j__free(eax_15)

eax_15.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_15
