// 函数: sub_495c20
// 地址: 0x495c20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 u<= 0x100)
    int32_t __saved_esi_1 = arg1
    void var_210
    sub_4c84d0(&var_210, "save%03d.sav")
    int32_t var_218 = 0
    BOOL var_214 = 0
    int32_t eax_3 = sub_4c4810(&var_214, &var_218, &var_210, &var_214, "AVG_LOAD_TMP", 4, 0x1e)
    
    if (var_218 != 0)
        BOOL edi = var_214
        int32_t eax_4 = sub_4955c0(edi, eax_3)
        
        if (eax_4 == 0)
            sub_4d6c40(&var_218, &var_214)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        if (eax_4 != 1)
            sub_4d6c40(&var_218, &var_214)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        void* ecx_6 = *(edi + 0x7dc) + edi
        void* hMem_1 = nullptr
        var_214 = 0
        sub_4d1c30(sub_4bb540(&var_214, &hMem_1, ecx_6, &var_214), var_214, arg2, 0x273990)
        void* hMem = hMem_1
        GlobalUnlock(hMem)
        GlobalFree(hMem)
        sub_4d6c40(&var_218, &var_214)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
