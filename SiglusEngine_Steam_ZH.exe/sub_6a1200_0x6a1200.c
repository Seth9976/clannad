// 函数: sub_6a1200
// 地址: 0x6a1200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9cb3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_ac = arg1
int32_t var_a4 = 0
int32_t* eax_3
int32_t* ecx
eax_3, ecx = sub_745f3f(0x28)
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    ecx = eax_3
    eax_4 = sub_6f3550(ecx)

int32_t* var_9c = nullptr
int32_t var_8_1 = 1
int32_t* var_c4 = &var_9c
sub_69e2f0(eax_4, eax_4, ecx)
int32_t var_8_2 = 2
char eax_5 = sub_6f3610(eax_4, arg3, arg4, arg5, arg6, arg7, arg8)

if (eax_5 != 0)
    int32_t var_98
    sub_6a0aa0(&var_98)
    var_8_2.b = 3
    void var_70
    
    if (&var_70 != arg2)
        sub_52e3c0(&var_70, arg2, 0, 0xffffffff)
    
    int32_t eax_9 = data_4ebe2a8
    int32_t* edi_2 = var_9c
    int32_t* var_3c
    int32_t* ecx_7 = var_3c
    int32_t var_94_1 = eax_9
    data_4ebe2a8 = eax_9 + 1
    var_98 = 1
    int32_t* var_40_1 = eax_4
    
    if (edi_2 != ecx_7)
        if (edi_2 != 0)
            edi_2[2] += 1
            ecx_7 = var_3c
        
        if (ecx_7 != 0)
            bool cond:2_1 = ecx_7[2] != 1
            ecx_7[2]
            ecx_7[2] -= 1
            
            if (not(cond:2_1))
                (*(*ecx_7 + 8))(eax_2)
        
        int32_t* var_3c_1 = edi_2
    
    int32_t var_90_1 = arg3
    int32_t var_8c_1 = arg4
    int32_t var_88_1 = eax_4[3]
    int32_t var_80_1 = arg5
    int32_t var_7c_1 = arg6
    int32_t var_78_1 = arg7
    int32_t var_74_1 = arg8
    char var_44_1 = arg9
    int32_t var_84_1 = eax_4[4]
    sub_6a4030(&var_98)
    int32_t* ecx_9 = var_9c
    *arg1 = eax_4
    arg1[1] = 0
    int32_t* eax_25 = arg1[1]
    arg1[1] = ecx_9
    var_9c = eax_25
    int32_t var_a0_1 = 0
    int32_t var_a4_2 = 1
    var_8_2.b = 2
    sub_5719b0(&var_98)
    var_8_2.b = 0
    int32_t* edi_3 = var_9c
    
    if (edi_3 != 0)
        bool cond:1_1 = edi_3[1] != 1
        edi_3[1]
        edi_3[1] -= 1
        
        if (not(cond:1_1))
            (*(*edi_3 + 4))(eax_2)
            int32_t esi_3 = edi_3[2]
            edi_3[2] -= 1
            
            if (esi_3 == 1)
                (*(*edi_3 + 8))()
else
    *arg1 = nullptr
    arg1[1] = 0
    var_8_2.b = eax_5
    int32_t* edi_1 = var_9c
    int32_t var_a4_1 = 1
    
    if (edi_1 != 0)
        bool cond:0_1 = edi_1[1] != 1
        edi_1[1]
        edi_1[1] -= 1
        
        if (not(cond:0_1))
            (*(*edi_1 + 4))(eax_2)
            int32_t esi_1 = edi_1[2]
            edi_1[2] -= 1
            
            if (esi_1 == 1)
                (*(*edi_1 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
