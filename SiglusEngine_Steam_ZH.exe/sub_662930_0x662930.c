// 函数: sub_662930
// 地址: 0x662930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?SearchCacheLocal@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVScheduleGroupSegmentBase@23@_NK@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t ebx = 0
uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t esi = 0x41

do
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    int32_t var_8_1 = 0
    int16_t var_8c
    int16_t* eax_3 = sub_55c680(0, &var_5c, &var_8c, esi.w)
    var_8_1.b = 1
    int16_t var_74
    int16_t* eax_4 = sub_61ff20(eax_3, eax_3, &var_74, 0xaf88d8)
    var_8_1.b = 2
    int16_t var_2c = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    sub_52e3c0(&var_2c, eax_4, 0, 0xffffffff)
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    var_60 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    var_78 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    var_8_1.b = 6
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    var_5c = 0
    int16_t* lpRootPathName = &var_2c
    
    if (var_18_1 u>= 8)
        lpRootPathName = var_2c.d
    
    int32_t var_4c_2 = 0
    
    if (GetDriveTypeW(lpRootPathName) == 5)
        void** eax_7 = data_bac510 + 0x4c
        int32_t* lpFileName_1
        sub_5327a0(eax_7, &var_2c, &lpFileName_1, eax_7)
        int32_t* lpFileName = &lpFileName_1
        int32_t var_30
        
        if (var_30 u>= 8)
            lpFileName = lpFileName_1
        
        uint32_t eax_8 = GetFileAttributesW(lpFileName)
        
        if (eax_8 != 0xffffffff && (eax_8.b & 0x10) == 0)
            ebx = esi.w
            
            if (var_30 u>= 8)
                j__free(lpFileName_1)
            
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            lpFileName_1.w = 0
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            break
        
        if (var_30 u>= 8)
            j__free(lpFileName_1)
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    esi += 1
while (esi.w u<= 0x5a)

SetErrorMode(uMode)
uint32_t result
result.w = ebx
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
