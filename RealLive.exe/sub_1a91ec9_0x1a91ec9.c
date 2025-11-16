// 函数: sub_1a91ec9
// 地址: 0x1a91ec9
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x1ad4510
char* var_10 = "U"
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (arg1 != 0)
    int32_t eax = data_1c09040
    bool cond:0_1
    
    if (eax != 3)
        if (eax == 2)
            sub_1a976dc(9)
            int32_t var_8_3 = 1
            void** var_2c
            int32_t var_24
            char* eax_2 = sub_1a97078(arg1, &var_2c, &var_24)
            
            if (eax_2 != 0)
                sub_1a970cf(var_2c, var_24, eax_2)
            
            int32_t var_8_4 = 0xffffffff
            ExceptionList = sub_1a91f8b()
            cond:0_1 = eax_2 != 0
            goto label_1a91f84
        
        ExceptionList = HeapFree(data_1c09030, HEAP_NONE, arg1)
    else
        sub_1a976dc(9)
        int32_t var_8_1 = 0
        void* eax_1 = sub_1a95efb(arg1)
        
        if (eax_1 != 0)
            sub_1a95f26(eax_1, arg1)
        
        int32_t var_8_2 = 0xffffffff
        ExceptionList = sub_1a91f33()
        cond:0_1 = eax_1 != 0
    label_1a91f84:
        
        if (not(cond:0_1))
            ExceptionList = HeapFree(data_1c09030, HEAP_NONE, arg1)

fsbase->NtTib.ExceptionList = ExceptionList_1
return ExceptionList
