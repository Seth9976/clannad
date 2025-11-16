// 函数: sub_6d6ca0
// 地址: 0x6d6ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* esi = arg4
int32_t* eax_2

do
    eax_2.b = *esi
    esi = &esi[1]
while (eax_2.b != 0)

void* esi_1 = esi - &esi[1]
char* edi_1 = arg5

do
    eax_2.b = *edi_1
    edi_1 = &edi_1[1]
while (eax_2.b != 0)

void* edi_2 = edi_1 - (arg5 + 1)
void* eax_4 = esi_1 + 2 + edi_2

if (eax_4 u> 0x40)
    int32_t* eax_5 = sub_6d4470(arg3, "Can't write sCAL (buffer too small)")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_5

char var_48 = arg2
void var_47
sub_748840(&var_47, arg4, esi_1 + 1)
void var_46
int32_t* eax_9 = sub_748840(&var_46 + esi_1, arg5, edi_2)

if (arg3 != 0)
    sub_6d4aa0(eax_9, 0x7343414c, arg3, eax_4)
    
    if (eax_4 != 0)
        int32_t eax_10 = *(arg3 + 0x58)
        
        if (eax_10 == 0)
            sub_6d42e0(arg3, "Call to NULL write function")
            noreturn
        
        sub_6caa70(eax_10(arg3, &var_48, eax_4), &var_48, arg3, eax_4)
    
    eax_9 = sub_6d4bb0(arg3)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_9
