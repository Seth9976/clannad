// 函数: sub_496b50
// 地址: 0x496b50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_628
enum MESSAGEBOX_RESULT eax_1 = __security_cookie ^ &var_628
enum MESSAGEBOX_RESULT var_c = eax_1
bool cond:0 = data_13132cc == 0
void* hMem_1 = arg2

if (not(cond:0) && arg4 != 0 && data_12ff38c != 0)
    void text
    
    if (data_12ffa8c != 0)
        char* var_634_2 = &data_12ffa8c
        void* var_638_1 = &data_12ff98c
        sub_4c84d0(&text, "%s\n\n%s")
    else
        void* var_634_1 = &data_12ff98c
        sub_4c84d0(&text, "%s")
    
    eax_1 = MessageBoxA(data_7027bc, &text, &data_12ff88c, MB_YESNO)
    
    if (eax_1 == IDNO)
        sub_5f02dd(var_c ^ &var_628)
        return 2

if (arg3 == 0x1869f)
    if (data_702fc0 != 0)
        eax_1 = IDOK
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_1 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_1 = 0
            
            if (data_1af174c == 0 && eax_1 != 0)
                eax_1 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x12a45e8, nullptr), 
                        data_72d6ac, data_719b6c, 0x12a45e8, nullptr), 
                    data_72d6ac, data_719b6c, 0x12a45e8, nullptr)
    
    sub_496a00(eax_1, arg5, &data_13932a0, 1)
    sub_5f02dd(var_c ^ &var_628)
    return 1

if (arg3 == 0x1869e)
    if (data_702fc0 != 0)
        eax_1 = IDOK
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_1 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_1 = 0
            
            if (data_1af174c == 0 && eax_1 != 0)
                eax_1 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x187c628, nullptr), 
                        data_72d6ac, data_719b6c, 0x187c628, nullptr), 
                    data_72d6ac, data_719b6c, 0x187c628, nullptr)
    
    sub_496a00(eax_1, arg5, 0x187c728, 0)
    sub_5f02dd(var_c ^ &var_628)
    return 1

int32_t var_634_3 = arg3
int32_t var_61c = 0
BOOL var_624 = 0
void var_618
sub_4c84d0(&var_618, "save%03d.sav")
int32_t eax_10 = sub_4c4810(&var_624, &var_61c, &var_618, &var_624, "AVG_LOAD_TMP", 4, 0x1e)

if (var_61c == 0)
    sub_5f02dd(var_c ^ &var_628)
    return 0

BOOL edi = var_624
int32_t result = 0
int32_t eax_12 = sub_4955c0(edi, eax_10)

if (eax_12 != 0)
    if (eax_12 == 1)
        if (hMem_1 == 0)
            void* ecx_17 = *(edi + 0x7dc) + edi
            var_624 = 0
            hMem_1 = nullptr
            char* eax_14 = sub_4bb540(&var_624, &hMem_1, ecx_17, &var_624)
            
            if (data_702fc0 != 0)
                eax_14 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_14 = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_14 = nullptr
                    
                    if (data_1af174c == 0 && eax_14 != 0)
                        eax_14 = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_14, data_72d6ac, data_719b6c, &data_61434c, 
                                    nullptr), 
                                data_72d6ac, data_719b6c, &data_61434c, nullptr), 
                            data_72d6ac, data_719b6c, &data_61434c, nullptr)
            
            sub_496a00(eax_14, arg5, var_624, 0)
            void* hMem = hMem_1
            GlobalUnlock(hMem)
            GlobalFree(hMem)
        
        result = 1
    else if (eax_12 == 2)
        MessageBoxA(data_7027bc, 0x61af58, 0x61af44, MB_ICONHAND)

sub_4d6c40(&var_61c, &var_624)
sub_5f02dd(var_c ^ &var_628)
return result
