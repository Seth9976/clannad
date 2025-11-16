// 函数: sub_75dfdf
// 地址: 0x75dfdf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
SECURITY_ATTRIBUTES var_3c
var_3c.nLength = 0xc
int32_t var_24 = 0
char var_6 = 0
var_3c.lpSecurityDescriptor = 0
char var_5

if ((arg4 & 0x80) == 0)
    var_3c.bInheritHandle = 1
    var_5 = 0
else
    var_3c.bInheritHandle = 0
    var_5 = 0x10

if (sub_76079c(&var_24) != 0)
    int32_t var_58_11
    __builtin_memset(&var_58_11, 0, 0x14)
    __invoke_watson()
    noreturn

int32_t ecx_1 = arg4.d

if ((0x8000 & ecx_1) == 0 && ((ecx_1 & 0x74000) != 0 || var_24 != 0x8000))
    var_5 |= 0x80

int32_t eax_2 = ecx_1 & 3
uint32_t var_c_1
uint32_t edi_1

if (eax_2 == 0)
    edi_1 = 0x80000000
    var_c_1 = edi_1
else if (eax_2 != 1)
    if (eax_2 != 2)
        *___doserrno() = 0
        *arg2 = 0xffffffff
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x16
    
    edi_1 = 0xc0000000
    var_c_1 = edi_1
else if ((ecx_1.b & 8) == 0 || (ecx_1 & 0x70000) == 0)
    edi_1 = 0x40000000
    var_c_1 = edi_1
else
    edi_1 = 0xc0000000
    var_c_1 = 0xc0000000

int32_t var_2c_1 = 2
enum FILE_SHARE_MODE var_10_1

if (arg5 == 0x10)
    var_10_1 = FILE_SHARE_NONE
label_75e0f0:
    int32_t eax_17 = ecx_1 & 0x700
    enum FILE_CREATION_DISPOSITION esi_1
    enum FILE_CREATION_DISPOSITION var_4c_1
    
    if (eax_17 s> 0x400)
        if (eax_17 != 0x500)
            if (eax_17 == 0x600)
            label_75e157:
                var_4c_1 = TRUNCATE_EXISTING
                goto label_75e11e
            
            if (eax_17 == 0x700)
                goto label_75e15d
            
            goto label_75e13b
        
    label_75e15d:
        esi_1 = CREATE_NEW
    else if (eax_17 == 0x400 || eax_17 == 0)
        var_4c_1 = OPEN_EXISTING
    label_75e11e:
        esi_1 = var_4c_1
    else
        if (eax_17 == 0x100)
            var_4c_1 = OPEN_ALWAYS
            goto label_75e11e
        
        if (eax_17 == 0x200)
            goto label_75e157
        
        if (eax_17 != 0x300)
            goto label_75e13b
        
        esi_1 = CREATE_ALWAYS
    int32_t edx_1 = 0x80
    void* eax_21 = nullptr
    int32_t var_1c_1 = 0x80
    void* var_14_1 = nullptr
    
    if ((ecx_1 & 0x100) != 0)
        eax_21 = nullptr
        
        if (((not.d(data_b94f48)).b & arg6) s>= 0)
            edx_1 = 1
            var_1c_1 = 1
    
    if ((ecx_1.b & 0x40) != 0)
        eax_21 = &data_4000000
        var_10_1 |= FILE_SHARE_DELETE
        var_14_1 = &data_4000000
        var_c_1 = edi_1 | 0x10000
    
    if ((ecx_1 & 0x1000) != 0)
        var_1c_1 = edx_1 | 0x100
    
    if ((ecx_1 & 0x2000) != 0)
        eax_21 |= &data_2000000
        var_14_1 = eax_21
    
    if ((ecx_1.b & 0x20) != 0)
        var_14_1 = eax_21 | 0x8000000
    else if ((ecx_1.b & 0x10) != 0)
        var_14_1 = eax_21 | 0x10000000
    
    int32_t eax_26 = __alloc_osfhnd()
    *arg2 = eax_26
    
    if (eax_26 == 0xffffffff)
        *___doserrno() = 0
        *arg2 = 0xffffffff
        *__errno() = 0x18
        return *__errno()
    
    *arg1 = 1
    HANDLE hFile = sub_75de8e(arg3, var_c_1, var_10_1, &var_3c, esi_1, var_1c_1, var_14_1)
    HANDLE hObject = hFile
    
    if (hFile == 0xffffffff)
        if ((var_c_1 & 0xc0000000) != 0xc0000000 || (arg4 & 1) == 0)
        label_75e27d:
            int32_t ecx_4 = *arg2
            int32_t ecx_6 = (ecx_4 & 0x1f) << 6
            int32_t eax_35 = (&data_b95720)[ecx_4 s>> 5]
            *(eax_35 + ecx_6 + 4) &= 0xfe
            __dosmaperr(GetLastError())
            return *__errno()
        
        uint32_t ecx_3 = var_c_1 & 0x7fffffff
        var_c_1 = ecx_3
        hFile = sub_75de8e(arg3, ecx_3, var_10_1, &var_3c, esi_1, var_1c_1, var_14_1)
        hObject = hFile
        
        if (hFile == 0xffffffff)
            goto label_75e27d
    
    enum FILE_TYPE eax_38 = GetFileType(hFile)
    
    if (eax_38 == FILE_TYPE_UNKNOWN)
        int32_t ecx_8 = *arg2
        int32_t ecx_10 = (ecx_8 & 0x1f) << 6
        int32_t eax_41 = (&data_b95720)[ecx_8 s>> 5]
        *(eax_41 + ecx_10 + 4) &= 0xfe
        enum WIN32_ERROR eax_42 = GetLastError()
        __dosmaperr(eax_42)
        CloseHandle(hObject)
        
        if (eax_42 == NO_ERROR)
            *__errno() = 0xd
        
        return *__errno()
    
    if (eax_38 == FILE_TYPE_CHAR)
        var_5 |= 0x40
    else if (eax_38 == FILE_TYPE_PIPE)
        var_5 |= 8
    
    sub_75ea74(*arg2, hObject)
    int32_t edx_3
    edx_3.b = var_5
    int32_t ecx_12 = *arg2
    edx_3.b |= 1
    char var_5_1 = edx_3.b
    *((&data_b95720)[ecx_12 s>> 5] + ((ecx_12 & 0x1f) << 6) + 4) = edx_3.b
    int32_t ecx_15 = *arg2
    int32_t ecx_17 = (ecx_15 & 0x1f) << 6
    int32_t eax_49 = (&data_b95720)[ecx_15 s>> 5]
    *(eax_49 + ecx_17 + 0x24) &= 0x80
    eax_49.b = edx_3.b
    int32_t ecx_18 = arg4.d
    eax_49.b &= 0x48
    char var_7_1 = eax_49.b
    
    if (eax_49.b != 0)
        goto label_75e3fc
    
    if (edx_3.b s>= 0)
        goto label_75e620
    
    void* var_18
    
    if ((ecx_18.b & 2) != 0)
        int32_t eax_50
        void* edx_4
        eax_50, edx_4 =
            __lseeki64_nolock(eax_49, edx_3, ecx_18, *arg2, 0xffffffff, 0xffffffff, FILE_END)
        var_18 = edx_4
        
        if ((eax_50 & edx_4) != 0xffffffff)
            int32_t var_28 = 0
            int32_t eax_52
            int32_t ecx_21
            int32_t edx_5
            eax_52, ecx_21, edx_5 = sub_758c70(*arg2, &var_28, 1)
            
            if (eax_52 == 0 && var_28.w == 0x1a)
                eax_52, ecx_21, edx_5 = __chsize_nolock(*arg2, eax_50, var_18)
                
                if (eax_52 == 0xffffffff)
                    sub_758971(*arg2)
                    return *__errno()
            
            int32_t eax_53
            eax_53, edx_3 = __lseeki64_nolock(eax_52, edx_5, ecx_21, *arg2, 0, 0, FILE_BEGIN)
            
            if ((eax_53 & edx_3) == 0xffffffff)
                sub_758971(*arg2)
                return *__errno()
        else
            void* eax_51
            eax_51, edx_3 = ___doserrno()
            
            if (*eax_51 != 0x83)
                sub_758971(*arg2)
                return *__errno()
        
        edx_3.b = var_5_1
        ecx_18 = arg4.d
    
label_75e3fc:
    
    if (edx_3.b s>= 0)
        goto label_75e620
    
    if ((ecx_18 & 0x74000) == 0)
        int32_t eax_56 = var_24 & 0x74000
        
        if (eax_56 != 0)
            ecx_18 |= eax_56
        else
            ecx_18 |= 0x4000
        
        arg4.d = ecx_18
    
    int32_t eax_58 = ecx_18 & 0x74000
    
    if (eax_58 == 0x4000)
        var_6 = 0
    else if (eax_58 == 0x10000 || eax_58 == 0x14000)
        if ((ecx_18 & 0x301) == 0x301)
            var_6 = 2
    else if (eax_58 == 0x20000 || eax_58 == 0x24000)
        var_6 = 2
    else if (eax_58 == 0x40000 || eax_58 == 0x44000)
        var_6 = 1
    
    if ((ecx_18 & 0x70000) == 0)
        goto label_75e620
    
    var_18 = nullptr
    
    if ((edx_3.b & 0x40) != 0)
        goto label_75e620
    
    int32_t eax_62 = var_c_1 & 0xc0000000
    int32_t eax_67
    int32_t ecx_22
    void* ecx_24
    int32_t edx_8
    
    if (eax_62 == 0x40000000)
        if (esi_1 == 0)
            goto label_75e620
        
        ecx_22 = 2
        
        if (esi_1 u<= CREATE_ALWAYS)
            goto label_75e5d7
        
        if (esi_1 u> OPEN_ALWAYS)
        label_75e4cc:
            
            if (esi_1 == TRUNCATE_EXISTING)
                goto label_75e5d7
            
            goto label_75e620
        
        int32_t eax_71
        eax_71, ecx_24, edx_8 = __lseeki64_nolock(eax_62, edx_3, 2, *arg2, 0, 0, FILE_END)
        eax_67 = eax_71 | edx_8
        
        if (eax_67 != 0)
        label_75e5c0:
            int32_t eax_72
            int32_t edx_10
            eax_72, edx_10 = __lseeki64_nolock(eax_67, edx_8, ecx_24, *arg2, 0, 0, FILE_BEGIN)
            
            if ((eax_72 & edx_10) != 0xffffffff)
                goto label_75e620
            
            sub_758971(*arg2)
            return *__errno()
        
    label_75e5d6:
        ecx_22 = 2
    label_75e5d7:
        int32_t eax_74 = sx.d(var_6)
        void* esi_3 = nullptr
        
        if (eax_74 == 1)
            ecx_22 = 3
            var_18 = &data_bfbbef
            var_2c_1 = 3
        else
            if (eax_74 != 2)
                goto label_75e620
            
            var_18 = 0xfeff
        
        while (true)
            void* eax_80 = sub_759401(*arg2, &var_18 + esi_3, ecx_22 - esi_3)
            
            if (eax_80 == 0xffffffff)
                break
            
            ecx_22 = var_2c_1
            esi_3 += eax_80
            
            if (ecx_22 s<= esi_3)
                goto label_75e620
        
        sub_758971(*arg2)
        return *__errno()
    
    if (eax_62 != 0x80000000)
        if (eax_62 != 0xc0000000 || esi_1 == 0)
            goto label_75e620
        
        ecx_22 = 2
        
        if (esi_1 u<= CREATE_ALWAYS)
            goto label_75e5d7
        
        if (esi_1 u> OPEN_ALWAYS)
            goto label_75e4cc
        
        int32_t eax_63
        int32_t ecx_23
        int32_t edx_6
        eax_63, ecx_23, edx_6 = __lseeki64_nolock(eax_62, edx_3, 2, *arg2, 0, 0, FILE_END)
        int32_t eax_64 = eax_63 | edx_6
        
        if (eax_64 == 0)
            goto label_75e5d6
        
        int32_t eax_65
        int32_t edx_7
        eax_65, edx_7 = __lseeki64_nolock(eax_64, edx_6, ecx_23, *arg2, 0, 0, FILE_BEGIN)
        
        if ((eax_65 & edx_7) != 0xffffffff)
            goto label_75e50f
        
        sub_758971(*arg2)
        return *__errno()
    
label_75e50f:
    eax_67 = sub_758c70(*arg2, &var_18, 3)
    
    if (eax_67 == 0xffffffff)
        sub_758971(*arg2)
        return *__errno()
    
    ecx_24 = var_18
    edx_8 = 2
    
    if (eax_67 == 2)
    label_75e544:
        ecx_24 &= 0xffff
        
        if (ecx_24 != 0xfffe)
            if (ecx_24 != 0xfeff)
                goto label_75e5c0
            
            int32_t eax_69
            int32_t edx_9
            eax_69, edx_9 = __lseeki64_nolock(eax_67, 2, ecx_24, *arg2, 2, 0, FILE_BEGIN)
            
            if ((eax_69 & edx_9) == 0xffffffff)
                sub_758971(*arg2)
                return *__errno()
            
            var_6 = 2
            goto label_75e620
        
        sub_758971(*arg2)
        result = 0x16
        *__errno() = 0x16
    else
        if (eax_67 != 3)
            goto label_75e5c0
        
        if (ecx_24 != &data_bfbbef)
            goto label_75e544
        
        var_6 = 1
    label_75e620:
        int32_t edx_11 = *arg2
        int32_t edx_13 = (edx_11 & 0x1f) << 6
        int32_t ecx_26 = (&data_b95720)[edx_11 s>> 5]
        int32_t eax_82
        eax_82.b = *(ecx_26 + edx_13 + 0x24)
        eax_82.b ^= var_6
        eax_82.b &= 0x7f
        *(ecx_26 + edx_13 + 0x24) ^= eax_82.b
        int32_t esi_4 = *arg2
        int32_t esi_6 = (esi_4 & 0x1f) << 6
        int32_t edx_14 = (&data_b95720)[esi_4 s>> 5]
        int32_t eax_84
        eax_84.b = *(edx_14 + esi_6 + 0x24)
        eax_84.b &= 0x7f
        *(edx_14 + esi_6 + 0x24) = (arg4.d u>> 0x10).b << 7 | eax_84.b
        char ecx_29 = arg4
        
        if (var_7_1 == 0 && (ecx_29 & 8) != 0)
            int32_t ecx_30 = *arg2
            int32_t ecx_32 = (ecx_30 & 0x1f) << 6
            int32_t eax_87 = (&data_b95720)[ecx_30 s>> 5]
            *(eax_87 + ecx_32 + 4) |= 0x20
            ecx_29 = arg4
        
        if ((var_c_1 & 0xc0000000) == 0xc0000000 && (ecx_29 & 1) != 0)
            CloseHandle(hObject)
            HANDLE eax_90 = sub_75de8e(arg3, var_c_1 & 0x7fffffff, var_10_1, &var_3c, 
                OPEN_EXISTING, var_1c_1, var_14_1)
            
            if (eax_90 == 0xffffffff)
                __dosmaperr(GetLastError())
                int32_t ecx_33 = *arg2
                int32_t ecx_35 = (ecx_33 & 0x1f) << 6
                int32_t eax_94 = (&data_b95720)[ecx_33 s>> 5]
                *(eax_94 + ecx_35 + 4) &= 0xfe
                sub_75e987(*arg2)
                return *__errno()
            
            int32_t edx_15 = *arg2
            *(((edx_15 & 0x1f) << 6) + (&data_b95720)[edx_15 s>> 5]) = eax_90
else
    if (arg5 == 0x20)
        var_10_1 = FILE_SHARE_READ
        goto label_75e0f0
    
    if (arg5 == 0x30)
        var_10_1 = FILE_SHARE_WRITE
        goto label_75e0f0
    
    if (arg5 == 0x40)
        var_10_1 = FILE_SHARE_READ | FILE_SHARE_WRITE
        goto label_75e0f0
    
    if (arg5 == 0x80)
        enum FILE_SHARE_MODE eax_15
        eax_15.b = edi_1 == 0x80000000
        var_10_1 = eax_15
        goto label_75e0f0
    
label_75e13b:
    *___doserrno() = 0
    *arg2 = 0xffffffff
    result = 0x16
    *__errno() = 0x16
    __invalid_parameter_noinfo()
return result
