// 函数: sub_70fe10
// 地址: 0x70fe10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0fc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *arg1
struct _EXCEPTION_REGISTRATION_RECORD** ebx = nullptr
void* eax_4 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** var_40 = nullptr
int32_t* i = *edi
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_8_1 = 0

if (i != edi)
    do
        sub_70c4d0(&var_40, &i[0xa])
        
        if (*(i + 0xd) == 0)
            int32_t* i_3 = i[2]
            
            if (*(i_3 + 0xd) != 0)
                int32_t* i_5 = i[1]
                
                if (*(i_5 + 0xd) == 0)
                    while (i == i_5[2])
                        i = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0xd) != 0)
                            break
                
                i = i_5
            else
                i = i_3
                int32_t* i_4 = *i
                
                while (*(i_4 + 0xd) == 0)
                    i = i_4
                    i_4 = *i
    while (i != edi)
    
    ebx = var_40
    eax_4 = var_3c

int32_t eax_6
int32_t edx
edx:eax_6 = muls.dp.d(0x4ec4ec4f, eax_4 - ebx)
int32_t i_7 = (eax_4 - ebx) s/ 0x68
sub_7119e0(eax_6, var_3c, ebx, i_7, sub_70f5c0)
int32_t var_30
int32_t var_1c

if (i_7 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi = ebx
    int32_t i_1
    
    do
        var_8_1.b = 1
        sub_6b3810(arg2, (*esi)->Next(&var_30), nullptr, 0xffffffff)
        var_8_1.b = 0
        
        if (var_1c u>= 0x10)
            j__free(var_30)
        
        esi = &esi[0x1a]
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)
    ebx = var_40

int32_t var_8_2 = 0xffffffff

if (ebx != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = ebx
    
    if (ebx != var_3c)
        do
            sub_702710(esi_1)
            esi_1 = &esi_1[0x1a]
        while (esi_1 != var_3c)
    
    j__free(ebx)

int32_t* result = sub_6b3720(arg2, 0xb04184, 1)
int32_t** edi_6 = arg1[2]
int32_t* i_2 = *edi_6

while (i_2 != edi_6)
    int32_t var_8_3 = 2
    result = sub_6b3810(arg2, (*i_2[0xa])(&var_30), nullptr, 0xffffffff)
    int32_t var_8_4 = 0xffffffff
    
    if (var_1c u>= 0x10)
        result = j__free(var_30)
    
    if (*(i_2 + 0xd) == 0)
        int32_t* i_6 = i_2[2]
        
        if (*(i_6 + 0xd) != 0)
            result = i_2[1]
            
            if (*(result + 0xd) == 0)
                while (i_2 == result[2])
                    i_2 = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i_2 = result
        else
            i_2 = i_6
            result = *i_2
            
            while (*(result + 0xd) == 0)
                i_2 = result
                result = *i_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
