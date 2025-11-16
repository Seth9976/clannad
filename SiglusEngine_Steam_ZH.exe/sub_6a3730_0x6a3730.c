// 函数: sub_6a3730
// 地址: 0x6a3730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9f63
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_b0 = arg1
int32_t var_a4 = 0
int32_t* eax_4
int32_t* ecx
eax_4, ecx = sub_745f3f(0x14)

if (eax_4 == 0)
    eax_4 = nullptr
else
    __builtin_memset(eax_4, 0, 0x14)

int32_t* var_9c = nullptr
int32_t var_8_1 = 1
int32_t* var_c4 = &var_9c
sub_6a4680(eax_4, eax_4, ecx)
int32_t var_8_2 = 2
char eax_5 = sub_6f66c0(eax_4, arg3, arg4)

if (eax_5 != 0)
    int32_t var_98
    sub_6a0aa0(&var_98)
    var_8_2.b = 3
    int32_t eax_9 = data_4ebe2a8
    int32_t* edi_1 = var_9c
    int32_t* var_34
    int32_t* ecx_6 = var_34
    int32_t var_94_1 = eax_9
    data_4ebe2a8 = eax_9 + 1
    var_98 = 7
    int32_t* var_38_1 = eax_4
    
    if (edi_1 != ecx_6)
        if (edi_1 != 0)
            edi_1[2] += 1
            ecx_6 = var_34
        
        if (ecx_6 != 0)
            bool cond:2_1 = ecx_6[2] != 1
            ecx_6[2]
            ecx_6[2] -= 1
            
            if (not(cond:2_1))
                (*(*ecx_6 + 8))(eax_2)
        
        int32_t* var_34_1 = edi_1
    
    void var_70
    
    if (&var_70 != arg2)
        sub_52e3c0(&var_70, arg2, 0, 0xffffffff)
    
    int32_t var_90_1 = arg3
    int32_t var_8c_1 = arg4
    char var_44_1 = 1
    sub_6a4030(&var_98)
    int32_t* ecx_8 = var_9c
    *arg1 = eax_4
    arg1[1] = 0
    int32_t* eax_19 = arg1[1]
    arg1[1] = ecx_8
    var_9c = eax_19
    int32_t var_a0_1 = 0
    int32_t var_a4_2 = 1
    var_8_2.b = 2
    sub_5719b0(&var_98)
    var_8_2.b = 0
    int32_t* edi_2 = var_9c
    
    if (edi_2 != 0)
        bool cond:1_1 = edi_2[1] != 1
        edi_2[1]
        edi_2[1] -= 1
        
        if (not(cond:1_1))
            (*(*edi_2 + 4))(eax_2)
            int32_t esi_3 = edi_2[2]
            edi_2[2] -= 1
            
            if (esi_3 == 1)
                (*(*edi_2 + 8))()
else
    *arg1 = 0
    arg1[1] = 0
    var_8_2.b = eax_5
    int32_t* edi = var_9c
    int32_t var_a4_1 = 1
    
    if (edi != 0)
        bool cond:0_1 = edi[1] != 1
        edi[1]
        edi[1] -= 1
        
        if (not(cond:0_1))
            (*(*edi + 4))(eax_2)
            int32_t esi_1 = edi[2]
            edi[2] -= 1
            
            if (esi_1 == 1)
                (*(*edi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
