// 函数: ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@AAY0M@D@Z
// 地址: 0x5c5930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_244 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HRESULT result

if (arg1[3] == 0 || arg1[5] == 0)
    CRITICAL_SECTION* lpCriticalSection = data_bac3f8 + 0x10
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    int32_t var_8_1 = 0
    EnterCriticalSection(lpCriticalSection)
    HRESULT result_1 = E_FAIL
    char var_230_1 = 1
    
    if (arg1[3] != 0)
        result_1 = 0
    else
        int32_t* rguid = arg1[1]
        int32_t eax_3 = data_bac3e8.d
        struct ITypeLib pptlib = 0
        int32_t* var_220
        
        if (eax_3 != *rguid || data_bac3e8:4 != rguid[1] || data_bac3e8:8 != rguid[2]
                || data_bac3e8:0xc != rguid[3] || arg1[2].w != 0xffff || *(arg1 + 0xa) != 0xffff)
            result_1 = LoadRegTypeLib(rguid, arg1[2].w, *(arg1 + 0xa), arg2, &pptlib)
        label_5c5a64:
            
            if (result_1 s>= 0)
                int32_t* var_224 = nullptr
                var_8_1.b = 1
                struct ITypeLib pptlib_1 = pptlib
                result_1 = (*(*pptlib_1 + 0x18))(pptlib_1, *arg1, &var_224)
                
                if (result_1 s>= 0)
                    int32_t* eax_13 = var_224
                    int32_t* var_228_1 = eax_13
                    
                    if (eax_13 != 0)
                        (*(*eax_13 + 4))(eax_13)
                        eax_13 = var_224
                    
                    var_220 = nullptr
                    var_8_1.b = 3
                    
                    if ((**eax_13)(eax_13, 0xaf2e68, &var_220) s>= 0)
                        sub_5cc720(&var_220)
                    
                    arg1[3] = var_228_1
                    void* eax_16 = data_bac3f8
                    int32_t* var_228_2 = nullptr
                    void* ecx_4
                    
                    if (eax_16 == 0)
                        ecx_4 = nullptr
                    else
                        ecx_4 = eax_16 + 4
                    
                    int32_t* var_248_8 = arg1
                    sub_5c5160(ecx_4)
                    var_8_1.b = 2
                    int32_t* eax_17 = var_220
                    
                    if (eax_17 != 0)
                        (*(*eax_17 + 8))(eax_17)
                    
                    var_8_1.b = 1
                    
                    if (var_228_2 != 0)
                        (*(*var_228_2 + 8))(var_228_2)
                
                struct ITypeLib pptlib_2 = pptlib
                (*(*pptlib_2 + 8))(pptlib_2)
                var_8_1.b = 0
                int32_t* eax_19 = var_224
                
                if (eax_19 != 0)
                    (*(*eax_19 + 8))(eax_19)
        else
            wchar16 var_21c[0x104]
            uint32_t eax_7 = GetModuleFileNameW(data_b95abc, &var_21c, 0x104)
            
            if (eax_7 != 0 && eax_7 != 0x104)
                var_220 = nullptr
                result_1 = LoadTypeLib(&var_21c, &pptlib)
                sub_5cbbd0(&var_220)
                goto label_5c5a64
    
    int32_t eax_20 = arg1[3]
    
    if (eax_20 != 0 && arg1[5] == 0)
        int32_t var_248_13 = eax_20
        result_1 = sub_5c5730(arg1)
    
    LeaveCriticalSection(lpCriticalSection)
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
