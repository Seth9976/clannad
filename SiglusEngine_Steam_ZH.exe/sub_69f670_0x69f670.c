// 函数: sub_69f670
// 地址: 0x69f670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c9ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_20c
int32_t eax_2 = __security_cookie ^ &var_20c
int32_t __saved_edi
int32_t var_21c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_bac514
var_20c = edi
void** var_208 = nullptr
int32_t result_1 = 0
int32_t var_200 = 0
int32_t var_c_1 = 0
int32_t var_1dc = 7
int32_t var_1e0 = 0
int16_t var_1f0 = 0
sub_52e720(&var_1f0, u"reg.ini", 7)
var_c_1.b = 1
char eax_5
void* ecx_2
eax_5, ecx_2 = sub_6b80e0(&var_1f0, &var_208)
var_c_1.b = 0
int32_t ebx
ebx.b = eax_5 == 0

if (var_1dc u>= 8)
    ecx_2 = j__free(var_1f0.d)

int32_t result = result_1
void** esi = var_208

if (ebx.b != 0)
    ebx.b = 1
else
    ebx = 0
    ecx_2 = result - esi
    int32_t eax_9 = ecx_2 s/ 0x18
    
    if (eax_9 s> 0)
        void** var_1f8_1 = esi
        
        do
            int32_t (__fastcall* var_220_2)(int32_t* arg1) = sub_52e8a0
            void* var_1a0
            sub_74675f(&var_1a0, 0x18, 0x10, sub_53a2c0)
            var_c_1.b = 2
            void* var_220_3 = 0xffffffff
            int32_t var_224_2 = 0
            int32_t var_1dc_1 = 7
            int32_t var_1e0_1 = 0
            var_1f0 = 0
            sub_52e3c0(&var_1f0, esi, var_224_2, var_220_3)
            var_c_1.b = 3
            void* const var_220_4 = 3
            int32_t var_1a4_1 = 7
            int32_t* var_224_3 = &data_aee7a0
            int32_t var_1a8_1 = 0
            int16_t var_1b8 = 0
            sub_52e720(&var_1b8, var_224_3, var_220_4)
            int16_t* ecx_6 = &var_1f0
            
            if (var_1dc_1 u>= 8)
                ecx_6 = var_1f0.d
            
            int32_t var_1bc_1 = 7
            int32_t var_1c0_1 = 0
            void* eax_11 = &ecx_6[var_1e0_1]
            int16_t* ecx_7 = &var_1f0
            
            if (var_1dc_1 u>= 8)
                ecx_7 = var_1f0.d
            
            int16_t var_1d0 = 0
            var_c_1.b = 5
            void* var_220_5 = 0xffffffff
            int32_t var_224_4 = 0
            int16_t* var_1d8 = ecx_7
            sub_52e3c0(&var_1d0, &var_1b8, var_224_4, var_220_5)
            var_c_1.b = 7
            
            if (var_1a4_1 u>= 8)
                j__free(var_1b8.d)
            
            int16_t* edi_1 = var_1d8
            int32_t var_1a4_2 = 7
            int32_t var_1a8_2 = 0
            var_1b8 = 0
            sub_6af2c0(0, &var_1d0, &var_1d8, eax_11)
            
            if (var_1d8 == eax_11)
                edi = var_20c
            else
                var_1d8 = edi_1
                void* var_1d4_2 = eax_11
                int16_t* var_238 = &data_af77d0
                void var_234
                sub_52e820(&var_234, var_238)
                var_238 = &var_1d8
                
                if (sub_6afb70(var_238, var_234) != 0)
                    edi = var_20c
                else
                    void** var_220_8 = &var_1a0
                    sub_52e820(&var_238, 
                        &C_cfg_wnd_modal_font::`vftable'{for `C_cfg_wnd_modal'}.vFunc_14)
                    
                    if (sub_6afb70(&var_1d8, var_238) == 0)
                        if (var_1bc_1 u>= 8)
                            j__free(var_1d0.d)
                        
                        int32_t var_1bc_3 = 7
                        int32_t var_1c0_3 = 0
                        var_1d0 = 0
                        
                        if (var_1dc_1 u>= 8)
                            j__free(var_1f0.d)
                        
                        int32_t (__fastcall* var_220_15)(int32_t* arg1) = sub_52e8a0
                        int32_t var_1dc_3 = 7
                        int32_t var_224_7 = 0x10
                        var_1f0 = 0
                        var_c_1.b = 0
                        int32_t var_1e0_3 = 0
                        ecx_2 = `eh vector vbase constructor iterator'(&var_1a0, 0x18, var_224_7, 
                            var_220_15)
                        result = result_1
                        ebx.b = 0
                        goto label_69fa1b
                    
                    edi = var_20c
                    
                    if (edi != &var_1a0)
                        sub_52e3c0(edi, &var_1a0, 0, 0xffffffff)
            
            if (var_1bc_1 u>= 8)
                j__free(var_1d0.d)
            
            int32_t var_1bc_2 = 7
            int32_t var_1c0_2 = 0
            var_1d0 = 0
            
            if (var_1dc_1 u>= 8)
                j__free(var_1f0.d)
            
            int32_t (__fastcall* var_220_12)(int32_t* arg1) = sub_52e8a0
            int32_t var_1dc_2 = 7
            int32_t var_224_6 = 0x10
            var_1f0 = 0
            var_c_1.b = 0
            int32_t var_1e0_2 = 0
            ecx_2 = `eh vector vbase constructor iterator'(&var_1a0, 0x18, var_224_6, var_220_12)
            ebx += 1
            esi = &var_1f8_1[6]
            var_1f8_1 = esi
        while (ebx s< eax_9)
    
    if (edi[4] != 0)
        result = result_1
        ebx.b = 1
    else
        result = result_1
        ebx.b = 0

label_69fa1b:
void** esi_3 = var_208

if (esi_3 != 0)
    int32_t var_1fc
    int32_t var_220_16 = var_1fc
    void* var_224_8 = ecx_2
    sub_55d500(esi_3, result)
    j__free(esi_3)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_20c)
return result
