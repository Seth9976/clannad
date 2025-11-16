// 函数: sub_674cf0
// 地址: 0x674cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e3c0(&var_2c, arg2 + 0xc, 0, 0xffffffff)
int32_t edi = 0
int32_t var_8_1 = 0

if (arg3 == 0)
    goto label_674d5f

int32_t* eax_5 = arg3 - 1

if (arg3 == 1)
    edi = *(arg2 + 0x16c)
label_674d5f:
    eax_5 = &var_2c
    
    if (&var_2c != arg2 + 0xc)
        eax_5 = sub_52e3c0(&var_2c, arg2 + 0xc, 0, 0xffffffff)

int32_t result
void* ebx

if (sub_65d6a0(eax_5, edi, &var_2c, 0xa, 0, 0).b != 0)
    if (arg3 == 1)
        void* ecx_3 = data_bac460
        void* ecx_5 = sub_548970(ecx_3 + 4, *(ecx_3 + 0xb8) - 1, 1)
        result = arg4
        void* i = arg2 + 0x2c8
        ebx = nullptr
        void* var_30_1 = ecx_5
        int32_t edi_1 = 0
        
        for (; i != result; i += 0x164)
            if (*(i + 4) == 0xa)
                int32_t eax_9 = *(i + 8)
                void* var_48_1 = ecx_5
                int32_t* eax_10 = sub_55b0d0(ecx_5 + 0x15c, ebx)
                
                if (eax_10 != 0)
                    *eax_10 = eax_9
                
                ecx_5 = var_30_1
                ebx += 1
                result = arg4
            
            if (*(i + 4) == 0x14)
                int32_t* eax_11 = sub_55b400(ecx_5 + 0x214, edi_1, 1)
                
                if (eax_11 != 0 && eax_11 != i + 0xc)
                    sub_52e3c0(eax_11, i + 0xc, 0, 0xffffffff)
                
                result = arg4
                edi_1 += 1
            
            ecx_5 = var_30_1
    
    ebx.b = 1
else
    ebx.b = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
