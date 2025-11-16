// 函数: sub_44bbb0
// 地址: 0x44bbb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_9c0
int32_t eax_1 = __security_cookie ^ &var_9c0

if (data_702fc0 != 0 && data_1313264 != 0xffffffff && data_1313268 != 0xffffffff)
    int32_t eax_2 = GetSystemMetrics(SM_CXSCREEN)
    int32_t eax_3 = GetSystemMetrics(SM_CYSCREEN)
    int32_t X = data_1313264
    int32_t Y = data_1313268
    
    if (X s>= 0 && data_1332b5c - 1 + X s< eax_2 && Y s>= 0 && data_1332b58 - 1 + Y s< eax_3)
        SetWindowPos(data_7027bc, nullptr, X, Y, 0, 0, 0x5)

char* var_9cc = &data_108f654
void* const var_9d0

if (data_1332d90 != 0)
    var_9d0 = &data_6175ec
else
    var_9d0 = &data_6175c4

sub_4c84d0(&data_7027c0, var_9d0)

if (data_702fc0 != 0)
    int32_t eax_7 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_7 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_7 = 0
        
        if (data_1af174c == 0 && eax_7 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_7, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)

int32_t eax_10 = data_1af4510

if (eax_10 != 0xffffffff)
    int32_t var_9cc_1 = eax_10 + 0x41
    sub_4c84d0(&data_7027c0, 0x617634)
    
    if (data_702fc0 != 0)
        int32_t eax_15 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_15 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_15 = 0
            
            if (data_1af174c == 0 && eax_15 != 0)
                int32_t var_9dc_3 = 0
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_15, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
else if (data_702fc0 != 0)
    int32_t eax_11 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_11 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_11 = 0
        
        if (data_1af174c == 0 && eax_11 != 0)
            int32_t var_9dc_2 = 0
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_11, data_72d6ac, data_719b6c, &data_617618, nullptr), 
                    data_72d6ac, data_719b6c, &data_617618, nullptr), 
                data_72d6ac, data_719b6c, &data_617618, nullptr)

int32_t eax_17 = data_1af4514
char var_520[0x100]

if (eax_17 == 1)
    char* var_9cc_2 = &data_13339d8
    sub_4c84d0(&data_7027c0, 0x617648)
    
    if (data_702fc0 != 0)
        int32_t eax_18 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_18 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_18 = 0
            
            if (data_1af174c == 0 && eax_18 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_18, data_72d6ac, data_719b6c, &data_7027c0, &data_617680), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_617680), 
                    data_72d6ac, data_719b6c, &data_7027c0, &data_617680)
else if (eax_17 == 2)
    char* var_9cc_3 = &data_13339d8
    sub_4c84d0(&data_7027c0, 0x6176a8)
    char* var_9cc_4 = &data_13339d8
    sub_4c84d0(&var_520, &data_6176dc)
    
    if (data_702fc0 != 0)
        int32_t eax_21 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_21 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_21 = 0
            
            if (data_1af174c == 0 && eax_21 != 0)
                sub_55ef70(&var_520, data_72d6ac, data_719b6c, &data_7027c0, &var_520)
                sub_55f1e0(&var_520, data_72d6ac, data_719b6c, &data_7027c0, &var_520)
                sub_55f390(&var_520, data_72d6ac, data_719b6c, &data_7027c0, &var_520)
else if (data_13339d8 != 0)
    char* var_9cc_6 = &data_13339d8
    sub_4c84d0(&data_7027c0, 0x617778)
    
    if (data_702fc0 != 0)
        int32_t eax_26 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_26 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_26 = 0
            
            if (data_1af174c == 0 && eax_26 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_26, data_72d6ac, data_719b6c, &data_7027c0, &data_6177a8), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_6177a8), 
                    data_72d6ac, data_719b6c, &data_7027c0, &data_6177a8)
else if (data_702fc0 != 0)
    int32_t eax_24 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_24 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_24 = 0
        
        if (data_1af174c == 0 && eax_24 != 0)
            sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_24, data_72d6ac, data_719b6c, &data_617748, &data_617708), 
                    data_72d6ac, data_719b6c, &data_617748, &data_617708), 
                data_72d6ac, data_719b6c, &data_617748, &data_617708)

if (data_1af450c != 1)
    if (data_1af450c != 2)
        if (data_702fc0 != 0)
            int32_t eax_33 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_33 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_33 = 0
                
                if (data_1af174c == 0 && eax_33 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_33, data_72d6ac, data_719b6c, &data_6178e0, 
                                &data_6178b0), 
                            data_72d6ac, data_719b6c, &data_6178e0, &data_6178b0), 
                        data_72d6ac, data_719b6c, &data_6178e0, &data_6178b0)
    else if (data_702fc0 != 0)
        int32_t eax_31 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_31 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_31 = 0
            
            if (data_1af174c == 0 && eax_31 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_31, data_72d6ac, data_719b6c, &data_617870, &data_6176dc), 
                        data_72d6ac, data_719b6c, &data_617870, &data_6176dc), 
                    data_72d6ac, data_719b6c, &data_617870, &data_6176dc)
else if (data_702fc0 != 0)
    int32_t eax_28 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_28 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_28 = 0
        
        if (data_1af174c == 0 && eax_28 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_28, data_72d6ac, data_719b6c, &data_617828, nullptr), 
                    data_72d6ac, data_719b6c, &data_617828, nullptr), 
                data_72d6ac, data_719b6c, &data_617828, nullptr)

int32_t eax_35 = data_1af44d0

if (eax_35 != 0xffffffff)
    int32_t var_9cc_7 = eax_35 + 0x41
    sub_4c84d0(&data_7027c0, 0x617910)
    
    if (data_702fc0 != 0)
        int32_t eax_37 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_37 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_37 = 0
            
            if (data_1af174c == 0 && eax_37 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_37, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)

if (data_1333e08 == 2 && data_702fc0 != 0)
    int32_t eax_40 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_40 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_40 = 0
        
        if (data_1af174c == 0 && eax_40 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_40, data_72d6ac, data_719b6c, 0x61794c, nullptr), 
                    data_72d6ac, data_719b6c, 0x61794c, nullptr), 
                data_72d6ac, data_719b6c, 0x61794c, nullptr)

if (data_702fc0 != 0)
    int32_t eax_43 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_43 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_43 = 0
        
        if (data_1af174c == 0 && eax_43 != 0)
            sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_43, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                data_72d6ac, data_719b6c, &data_616b48, &data_616b48)

if (data_108feb4 == 0)
    if (data_702fc0 != 0)
        int32_t eax_49 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_49 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_49 = 0
            
            if (data_1af174c == 0 && eax_49 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_49, data_72d6ac, data_719b6c, &data_6179dc, 
                            "Gameexe.ini #MMX_ENABLE=0 "), 
                        data_72d6ac, data_719b6c, &data_6179dc, "Gameexe.ini #MMX_ENABLE=0 "), 
                    data_72d6ac, data_719b6c, &data_6179dc, "Gameexe.ini #MMX_ENABLE=0 ")
else if (data_702fc0 != 0)
    int32_t eax_46 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_46 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_46 = 0
        
        if (data_1af174c == 0 && eax_46 != 0)
            sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_46, data_72d6ac, data_719b6c, &data_617994, 
                        "Gameexe.ini #MMX_ENABLE=1"), 
                    data_72d6ac, data_719b6c, &data_617994, "Gameexe.ini #MMX_ENABLE=1"), 
                data_72d6ac, data_719b6c, &data_617994, "Gameexe.ini #MMX_ENABLE=1")

bool cond:16 = data_108feb8 == 0
data_1af19dc = 0

if (not(cond:16))
    if (data_702fc0 != 0)
        int32_t eax_51 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_51 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_51 = 0
            
            if (data_1af174c == 0 && eax_51 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_51, data_72d6ac, data_719b6c, "Direct3D ", 
                            "Gameexe.ini #D3D_ENABLE=1"), 
                        data_72d6ac, data_719b6c, "Direct3D ", "Gameexe.ini #D3D_ENABLE=1"), 
                    data_72d6ac, data_719b6c, "Direct3D ", "Gameexe.ini #D3D_ENABLE=1")
    
    if (sub_41a710() == 0)
        if (data_702fc0 != 0)
            int32_t eax_55 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_55 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_55 = 0
                
                if (data_1af174c == 0 && eax_55 != 0)
                    sub_55f390(
                        sub_55f1e0(sub_55ef70(eax_55, data_72d6ac, data_719b6c, 0x617a30, nullptr), 
                            data_72d6ac, data_719b6c, 0x617a30, nullptr), 
                        data_72d6ac, data_719b6c, 0x617a30, nullptr)
        
        HWND hWnd = data_7027bc
        data_108feb8 = 0
        data_1af19dc = 1
        MessageBoxA(hWnd, "Direct3D ", 0x617a88, MB_OK)
else if (data_702fc0 != 0)
    int32_t eax_58 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_58 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_58 = 0
        
        if (data_1af174c == 0 && eax_58 != 0)
            sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_58, data_72d6ac, data_719b6c, "Direct3D ", 
                        "Gameexe.ini #D3D_ENABLE=0 "), 
                    data_72d6ac, data_719b6c, "Direct3D ", "Gameexe.ini #D3D_ENABLE=0 "), 
                data_72d6ac, data_719b6c, "Direct3D ", "Gameexe.ini #D3D_ENABLE=0 ")

if (data_702fc0 != 0)
    int32_t eax_61 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_61 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_61 = 0
        
        if (data_1af174c == 0 && eax_61 != 0)
            sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_61, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                data_72d6ac, data_719b6c, &data_616b48, &data_616b48)

int32_t esi_1 = 0
int32_t var_9b8 = 0

if (data_1af450c != 0 || data_12a40b0 == 1)
    esi_1 = 1
    var_9b8 = 1

if (data_12c3ca0 != 0)
    if (data_1af44f8 == 0)
        if (data_702fc0 != 0)
            int32_t eax_70 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_70 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_70 = 0
                
                if (data_1af174c == 0 && eax_70 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_70, data_72d6ac, data_719b6c, 0x617c2c, 0x617c0c), 
                            data_72d6ac, data_719b6c, 0x617c2c, 0x617c0c), 
                        data_72d6ac, data_719b6c, 0x617c2c, 0x617c0c)
        
        if (esi_1 != 0 && data_702fc0 != 0)
            int32_t eax_73 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_73 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_73 = 0
                
                if (data_1af174c == 0 && eax_73 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_73, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                            data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr)
    else
        int32_t var_9cc_8 = data_1af44f0 + 0x41
        sub_4c84d0(&data_7027c0, 0x617bc4)
        int32_t var_9cc_9 = data_1af44f4
        sub_4c84d0(&var_520, 0x617be8)
        
        if (data_702fc0 != 0)
            int32_t eax_66 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_66 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_66 = 0
                
                if (data_1af174c == 0 && eax_66 != 0)
                    sub_55ef70(&var_520, data_72d6ac, data_719b6c, &data_7027c0, &var_520)
                    sub_55f1e0(&var_520, data_72d6ac, data_719b6c, &data_7027c0, &var_520)
                    sub_55f390(&var_520, data_72d6ac, data_719b6c, &data_7027c0, &var_520)

int32_t eax_75 = data_12c109c

if (eax_75 != 0)
    int32_t var_9cc_11 = eax_75
    sub_4c84d0(&data_7027c0, 0x617c84)
    
    if (data_702fc0 != 0)
        int32_t eax_76 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_76 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_76 = 0
            
            if (data_1af174c == 0 && eax_76 != 0)
                int32_t var_9dc_8 = 0
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_76, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
else if (esi_1 != 0 && data_702fc0 != 0)
    int32_t eax_79 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_79 = 0
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_79 = 0
        
        if (data_1af174c == 0 && eax_79 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_79, data_72d6ac, data_719b6c, 0x617cb0, nullptr), 
                    data_72d6ac, data_719b6c, 0x617cb0, nullptr), 
                data_72d6ac, data_719b6c, 0x617cb0, nullptr)
    
    if (data_702fc0 != 0)
        int32_t eax_82 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_82 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_82 = 0
            
            if (data_1af174c == 0 && eax_82 != 0)
                int32_t var_9dc_9 = 0
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_82, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                    data_72d6ac, data_719b6c, &data_617c5c, nullptr)

if (data_1af44e4 != 0)
    if (data_702fc0 != 0)
        int32_t eax_84 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_84 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_84 = 0
            
            if (data_1af174c == 0 && eax_84 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_84, data_72d6ac, data_719b6c, 0x617cd8, nullptr), 
                        data_72d6ac, data_719b6c, 0x617cd8, nullptr), 
                    data_72d6ac, data_719b6c, 0x617cd8, nullptr)
    
    if (esi_1 != 0 && data_702fc0 != 0)
        int32_t eax_87 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_87 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_87 = 0
            
            if (data_1af174c == 0 && eax_87 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_87, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                    data_72d6ac, data_719b6c, &data_617c5c, nullptr)

char* eax_90 = data_12c3ca0

if (eax_90 != 0)
    char* var_9cc_12 = eax_90
    eax_90 = sub_4c84d0(&data_7027c0, 0x617d1c)
    
    if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                int32_t var_9dc_10 = 0
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
else if (esi_1 != 0 && data_702fc0 != 0)
    eax_90 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_90 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_90 = nullptr
        
        if (data_1af174c == 0 && eax_90 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x617d44, nullptr), 
                    data_72d6ac, data_719b6c, 0x617d44, nullptr), 
                data_72d6ac, data_719b6c, 0x617d44, nullptr)
    
    if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                int32_t var_9dc_11 = 0
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                    data_72d6ac, data_719b6c, &data_617c5c, nullptr)

if (data_12c109c != 0 && data_12c3ca0 != 0)
    eax_90 = data_1af4504
    void* ecx_84 = data_1af4500
    
    if (eax_90 != 0 || ecx_84 != 0)
        if (data_1af4508 != 0)
            if (eax_90 != 0 && data_702fc0 != 0)
                eax_90 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_90 = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_90 = nullptr
                    
                    if (data_1af174c == 0 && eax_90 != 0)
                        eax_90 = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x617db0, 
                                    &data_617d84), 
                                data_72d6ac, data_719b6c, 0x617db0, &data_617d84), 
                            data_72d6ac, data_719b6c, 0x617db0, &data_617d84)
                        ecx_84 = data_1af4500
            
            if (ecx_84 != 0 && data_702fc0 != 0)
                eax_90 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_90 = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_90 = nullptr
                    
                    if (data_1af174c == 0 && eax_90 != 0)
                        eax_90 = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617ddc, 
                                    nullptr), 
                                data_72d6ac, data_719b6c, &data_617ddc, nullptr), 
                            data_72d6ac, data_719b6c, &data_617ddc, nullptr)
        else if (data_702fc0 != 0)
            eax_90 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_90 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_90 = nullptr
                
                if (data_1af174c == 0 && eax_90 != 0)
                    eax_90 = sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617e0c, 
                                &data_617d84), 
                            data_72d6ac, data_719b6c, &data_617e0c, &data_617d84), 
                        data_72d6ac, data_719b6c, &data_617e0c, &data_617d84)
    else if (data_702fc0 != ecx_84)
        eax_90 = ecx_84 + 1
        
        if (data_13184f8 == ecx_84)
            if (data_13184e8:8 == ecx_84 && (data_704870 != ecx_84 || data_70486c != ecx_84))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617d68, nullptr), 
                        data_72d6ac, data_719b6c, &data_617d68, nullptr), 
                    data_72d6ac, data_719b6c, &data_617d68, nullptr)

if (data_1af44e8 == 0)
    if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x617e58, "Gameexe.ini "), 
                        data_72d6ac, data_719b6c, 0x617e58, "Gameexe.ini "), 
                    data_72d6ac, data_719b6c, 0x617e58, "Gameexe.ini ")
    
    if (esi_1 != 0 && data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                    data_72d6ac, data_719b6c, &data_617c5c, nullptr)
else if (data_702fc0 != 0)
    eax_90 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_90 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_90 = nullptr
        
        if (data_1af174c == 0 && eax_90 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617eb8, "Gameexe.ini "), 
                    data_72d6ac, data_719b6c, &data_617eb8, "Gameexe.ini "), 
                data_72d6ac, data_719b6c, &data_617eb8, "Gameexe.ini ")

if (data_1af4508 != 0 && data_12a40b0 != 1 && data_702fc0 != 0)
    eax_90 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_90 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_90 = nullptr
        
        if (data_1af174c == 0 && eax_90 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x617f58, 0x617f28), 
                    data_72d6ac, data_719b6c, 0x617f58, 0x617f28), 
                data_72d6ac, data_719b6c, 0x617f58, 0x617f28)
    
    if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                    data_72d6ac, data_719b6c, &data_617c5c, nullptr)

if (data_1af4508 == 0 || data_1af4508 == 0)
    if (data_1af450c != 0 && data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x617fd0, nullptr), 
                        data_72d6ac, data_719b6c, 0x617fd0, nullptr), 
                    data_72d6ac, data_719b6c, 0x617fd0, nullptr)
        
        if (data_702fc0 != 0)
            eax_90 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_90 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_90 = nullptr
                
                if (data_1af174c == 0 && eax_90 != 0)
                    eax_90 = sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                            data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr)
    
    if (data_12a40b0 == 1 && data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x618018, nullptr), 
                        data_72d6ac, data_719b6c, 0x618018, nullptr), 
                    data_72d6ac, data_719b6c, 0x618018, nullptr)
        
        if (data_702fc0 != 0)
            eax_90 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_90 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_90 = nullptr
                
                if (data_1af174c == 0 && eax_90 != 0)
                    eax_90 = sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                            data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                        data_72d6ac, data_719b6c, &data_617c5c, nullptr)

if (data_702fc0 != 0)
    eax_90 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_90 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_90 = nullptr
        
        if (data_1af174c == 0 && eax_90 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                data_72d6ac, data_719b6c, &data_616b48, &data_616b48)

if (data_1af44dc != 3)
    goto label_44dd47

if (data_702fc0 != 0)
    eax_90 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_90 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_90 = nullptr
        
        if (data_1af174c == 0 && eax_90 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x6180b8, 0x618078), 
                    data_72d6ac, data_719b6c, 0x6180b8, 0x618078), 
                data_72d6ac, data_719b6c, 0x6180b8, 0x618078)
        label_44dd47:
            int32_t esi_2
            
            if (data_1af44dc != 0)
                esi_2 = var_9b8
            else if (data_12c109c != 0 || data_12c3ca0 == 0)
                if (data_13132e8 != 1)
                    if (data_12c3ca0 != 0)
                        if (data_702fc0 != 0)
                            eax_90 = 1
                            
                            if (data_13184f8 == 0)
                                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                                    eax_90 = nullptr
                                
                                if (data_1311178 != 0 && data_13184e8:4 == 0)
                                    eax_90 = nullptr
                                
                                if (data_1af174c == 0 && eax_90 != 0)
                                    eax_90 = sub_55f390(
                                        sub_55f1e0(
                                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, 
                                                &data_6181b8, nullptr), 
                                            data_72d6ac, data_719b6c, &data_6181b8, nullptr), 
                                        data_72d6ac, data_719b6c, &data_6181b8, nullptr)
                    else if (data_702fc0 != 0)
                        eax_90 = 1
                        
                        if (data_13184f8 == 0)
                            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                                eax_90 = nullptr
                            
                            if (data_1311178 != 0 && data_13184e8:4 == 0)
                                eax_90 = nullptr
                            
                            if (data_1af174c == 0 && eax_90 != 0)
                                eax_90 = sub_55f390(
                                    sub_55f1e0(
                                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_6181b8, 
                                            "DirectSound"), 
                                        data_72d6ac, data_719b6c, &data_6181b8, "DirectSound"), 
                                    data_72d6ac, data_719b6c, &data_6181b8, "DirectSound")
                else if (data_702fc0 != 0)
                    eax_90 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_90 = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_90 = nullptr
                        
                        if (data_1af174c == 0 && eax_90 != 0)
                            eax_90 = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_61815c, 
                                        &data_6180e0), 
                                    data_72d6ac, data_719b6c, &data_61815c, &data_6180e0), 
                                data_72d6ac, data_719b6c, &data_61815c, &data_6180e0)
                
                esi_2 = var_9b8
                
                if (esi_2 != 0 && data_702fc0 != 0)
                    eax_90 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_90 = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_90 = nullptr
                        
                        if (data_1af174c == 0 && eax_90 != 0)
                            eax_90 = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, 
                                        nullptr), 
                                    data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                                data_72d6ac, data_719b6c, &data_617c5c, nullptr)
                
                data_13132e8 = 0
            else
                if (data_702fc0 != 0)
                    eax_90 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_90 = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_90 = nullptr
                        
                        if (data_1af174c == 0 && eax_90 != 0)
                            eax_90 = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_618200, 
                                        &data_6181e0), 
                                    data_72d6ac, data_719b6c, &data_618200, &data_6181e0), 
                                data_72d6ac, data_719b6c, &data_618200, &data_6181e0)
                
                data_13132e8 = 1
                esi_2 = var_9b8
            
            if (data_1af44dc == 1)
                if (data_12c109c != 0)
                    if (data_702fc0 != 0)
                        eax_90 = 1
                        
                        if (data_13184f8 == 0)
                            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                                eax_90 = nullptr
                            
                            if (data_1311178 != 0 && data_13184e8:4 == 0)
                                eax_90 = nullptr
                            
                            if (data_1af174c == 0 && eax_90 != 0)
                                eax_90 = sub_55f390(
                                    sub_55f1e0(
                                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_61829c, 
                                            &data_618218), 
                                        data_72d6ac, data_719b6c, &data_61829c, &data_618218), 
                                    data_72d6ac, data_719b6c, &data_61829c, &data_618218)
                else if (data_702fc0 != 0)
                    eax_90 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_90 = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_90 = nullptr
                        
                        if (data_1af174c == 0 && eax_90 != 0)
                            eax_90 = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_618200, 
                                        &data_6181e0), 
                                    data_72d6ac, data_719b6c, &data_618200, &data_6181e0), 
                                data_72d6ac, data_719b6c, &data_618200, &data_6181e0)
                
                if (esi_2 != 0 && data_702fc0 != 0)
                    eax_90 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_90 = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_90 = nullptr
                        
                        if (data_1af174c == 0 && eax_90 != 0)
                            eax_90 = sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_617c5c, 
                                        nullptr), 
                                    data_72d6ac, data_719b6c, &data_617c5c, nullptr), 
                                data_72d6ac, data_719b6c, &data_617c5c, nullptr)
                
                data_13132e8 = 1

if (data_1af44d4 != 0)
    if (data_1af44d8 != 1)
        if (data_702fc0 != 0)
            int32_t eax_139 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_139 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_139 = 0
                
                if (data_1af174c == 0 && eax_139 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_139, data_72d6ac, data_719b6c, &data_618330, 
                                &data_6182f8), 
                            data_72d6ac, data_719b6c, &data_618330, &data_6182f8), 
                        data_72d6ac, data_719b6c, &data_618330, &data_6182f8)
    else if (data_702fc0 != 0)
        int32_t eax_136 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_136 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_136 = 0
            
            if (data_1af174c == 0 && eax_136 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_136, data_72d6ac, data_719b6c, &data_618200, &data_6182c4), 
                        data_72d6ac, data_719b6c, &data_618200, &data_6182c4), 
                    data_72d6ac, data_719b6c, &data_618200, &data_6182c4)
    
    eax_90 = data_1af44d8
    data_13132e8 = eax_90
else if (data_1af44dc == 2)
    if (data_12dc4c0 != 1)
        if (data_702fc0 != 0)
            int32_t eax_144 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_144 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_144 = 0
                
                if (data_1af174c == 0 && eax_144 != 0)
                    int32_t var_9dc_18 = 0x618358
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_144, data_72d6ac, data_719b6c, &data_6181b8, 0x618358), 
                            data_72d6ac, data_719b6c, &data_6181b8, 0x618358), 
                        data_72d6ac, data_719b6c, &data_6181b8, 0x618358)
    else if (data_702fc0 != 0)
        int32_t eax_141 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_141 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_141 = 0
            
            if (data_1af174c == 0 && eax_141 != 0)
                int32_t var_9dc_17 = 0x618358
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_141, data_72d6ac, data_719b6c, &data_618200, 0x618358), 
                        data_72d6ac, data_719b6c, &data_618200, 0x618358), 
                    data_72d6ac, data_719b6c, &data_618200, 0x618358)
    
    eax_90 = data_12dc4c0
    data_13132e8 = eax_90
else if (data_1af44dc == 3)
    if (data_13132e8 != 1)
        if (data_702fc0 != 0)
            eax_90 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_90 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_90 = nullptr
                
                if (data_1af174c == 0 && eax_90 != 0)
                    eax_90 = sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_6181b8, 
                                &data_618408), 
                            data_72d6ac, data_719b6c, &data_6181b8, &data_618408), 
                        data_72d6ac, data_719b6c, &data_6181b8, &data_618408)
    else if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_618200, &data_6183d4), 
                        data_72d6ac, data_719b6c, &data_618200, &data_6183d4), 
                    data_72d6ac, data_719b6c, &data_618200, &data_6183d4)

int32_t edi_2 = 0

if (data_108f34c == 0 && data_1af44cc == 1)
    if (data_702fc0 != 0)
        int32_t eax_149 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_149 = 0
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_149 = 0
            
            if (data_1af174c == 0 && eax_149 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_149, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
    
    void* var_9cc_13 = &data_108fa8c
    edi_2 = 1
    eax_90 = sub_4c84d0(&data_7027c0, 0x618440)
    
    if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_7027c0, 0x618474), 
                        data_72d6ac, data_719b6c, &data_7027c0, 0x618474), 
                    data_72d6ac, data_719b6c, &data_7027c0, 0x618474)

for (void* i = nullptr; i s< 0x2710; i += 1)
    if (*(i + 0x1af19e0) == 2)
        if (edi_2 == 0)
            void* const var_9bc_2 = &data_616b48
            
            if (data_702fc0 != 0)
                int32_t eax_154 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_154 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_154 = 0
                    
                    if (data_1af174c == 0 && eax_154 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_154, data_72d6ac, data_719b6c, &data_616b48, 
                                    &data_616b48), 
                                data_72d6ac, data_719b6c, var_9bc_2, &data_616b48), 
                            data_72d6ac, data_719b6c, var_9bc_2, &data_616b48)
            
            edi_2 = 1
        
        void* i_13 = i
        eax_90 = sub_4c84d0(&data_7027c0, 0x618498)
        
        if (data_702fc0 != 0)
            eax_90 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_90 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_90 = nullptr
                
                if (data_1af174c == 0 && eax_90 != 0)
                    eax_90 = sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_7027c0, 0x618474), 
                            data_72d6ac, data_719b6c, &data_7027c0, 0x618474), 
                        data_72d6ac, data_719b6c, &data_7027c0, 0x618474)

int32_t esi_3 = 0
int32_t edi_3 = 0
char* var_9bc_3 = &data_616bc8
char* var_9b8_1 = &data_616bc8

if (data_702fc0 != 0)
    eax_90 = 1
    
    if (data_13184f8 == 0)
        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
            eax_90 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_90 = nullptr
        
        if (data_1af174c == 0 && eax_90 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(
                    sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_616bc8, &data_616bc8), 
                    data_72d6ac, data_719b6c, var_9b8_1, var_9bc_3), 
                data_72d6ac, data_719b6c, var_9b8_1, var_9bc_3)

if (data_12c3ca0 != 0 && data_1af44f8 == 0)
    if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x617c2c, 0x617c0c), 
                        data_72d6ac, data_719b6c, 0x617c2c, 0x617c0c), 
                    data_72d6ac, data_719b6c, 0x617c2c, 0x617c0c)
    
    edi_3 = 2
    esi_3 = 0

if (data_1af44e8 == 0)
    if (data_13132e8 != 1)
        if (data_1af4504 == 0)
            goto label_44f07e
        
        if (edi_3 == 0)
        label_44ee3c:
            
            if (data_702fc0 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x618540, &data_618590), 
                        data_72d6ac, data_719b6c, 0x618540, &data_618590), 
                    data_72d6ac, data_719b6c, 0x618540, &data_618590)
        else if (data_702fc0 != 0)
            eax_90 = 1
            
            if (data_13184f8 == 0)
                if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                    eax_90 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_90 = nullptr
                
                if (data_1af174c == 0 && eax_90 != 0)
                    eax_90 = sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_616b48, 
                                &data_616b48), 
                            data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
            
            goto label_44ee3c
    else if (edi_3 == 0)
    label_44ed2b:
        
        if (data_702fc0 != 0)
            eax_90 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x618540, &data_6184e0), 
                    data_72d6ac, data_719b6c, 0x618540, &data_6184e0), 
                data_72d6ac, data_719b6c, 0x618540, &data_6184e0)
    else if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_44ed2b
    
    edi_3 = 1
    esi_3 = 0

if (data_1af44e8 != 1 || data_1af44f8 != 1)
label_44f07e:
    int32_t ecx_201 = data_12c109c
    int32_t edx_197 = 0
    int32_t var_9b8_2 = 0
    int32_t var_9b4_1 = 0
    
    if (ecx_201 s> 0)
        void* eax_179 = &data_12be2cc
        void* var_9bc_4 = &data_12be2cc
        
        do
            if (*(eax_179 + 0x24) != 0)
                if (edi_3 != 0)
                    if (data_702fc0 != 0)
                        eax_179 = 1
                        
                        if (data_13184f8 == 0)
                            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                                eax_179 = nullptr
                            
                            if (data_1311178 != 0 && data_13184e8:4 == 0)
                                eax_179 = nullptr
                            
                            if (data_1af174c == 0 && eax_179 != 0)
                                eax_179 = sub_55f390(
                                    sub_55f1e0(
                                        sub_55ef70(eax_179, data_72d6ac, data_719b6c, &data_616b48, 
                                            &data_616b48), 
                                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
                    
                    edi_3 = 0
                
                if (var_9b8_2 == 0)
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_179, data_72d6ac, data_719b6c, 0x6186c4, 0x61860c), 
                                data_72d6ac, data_719b6c, 0x6186c4, 0x61860c), 
                            data_72d6ac, data_719b6c, 0x6186c4, 0x61860c)
                    
                    var_9b8_2 = 1
                
                void* var_9cc_15 = var_9bc_4
                void* var_9d0_2 = var_9bc_4 - 0x24
                char* eax_186 = sub_4c84d0(&data_7027c0, 0x6186a4)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_186, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                            data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr)
                
                ecx_201 = data_12c109c
                esi_3 = 1
                eax_179 = var_9bc_4
                edx_197 = var_9b4_1
            
            edx_197 += 1
            eax_179 += 0x5c
            var_9b4_1 = edx_197
            var_9bc_4 = eax_179
        while (edx_197 s< ecx_201)
        
        if (esi_3 != 0)
            edi_3 = 2
            esi_3 = 0
else if (data_1af44e0 != 0)
    if (edi_3 == 0)
    label_44ef7e:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_90, data_72d6ac, data_719b6c, 0x618630, 0x61860c), 
                    data_72d6ac, data_719b6c, 0x618630, 0x61860c), 
                data_72d6ac, data_719b6c, 0x618630, 0x61860c)
    else if (data_702fc0 != 0)
        eax_90 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_90 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_90 = nullptr
            
            if (data_1af174c == 0 && eax_90 != 0)
                eax_90 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_90, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_44ef7e
    
    if (data_12c109c s> 0)
        void* esi_4 = &data_12be2f4
        int32_t i_1 = 0
        
        do
            if (*(esi_4 - 4) != 0 && *esi_4 != 0)
                void* var_9cc_14 = esi_4 - 0x28
                void* var_9d0_1 = esi_4 - 0x4c
                char* eax_176 = sub_4c84d0(&data_7027c0, 0x6186a4)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_176, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                            data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            
            i_1 += 1
            esi_4 += 0x5c
        while (i_1 s< data_12c109c)
    
    edi_3 = 2
    esi_3 = 0

int32_t i_2 = 0
int32_t var_9b8_3 = 0
int32_t i_14 = 0
void var_728

do
    char* eax_189 = sub_45f7a0(i_2, &var_728)
    
    if (eax_189 == 0)
        if (edi_3 != 0)
            if (data_702fc0 != eax_189)
                eax_189 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_189 = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_189 = nullptr
                    
                    if (data_1af174c == 0 && eax_189 != 0)
                        eax_189 = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_189, data_72d6ac, data_719b6c, &data_616b48, 
                                    &data_616b48), 
                                data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                            data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
            
            edi_3 = 0
        
        if (var_9b8_3 == 0)
            var_9b8_3 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_189, data_72d6ac, data_719b6c, 0x618708, nullptr), 
                        data_72d6ac, data_719b6c, 0x618708, nullptr), 
                    data_72d6ac, data_719b6c, 0x618708, nullptr)
        
        void* var_9cc_16 = &var_728
        int32_t i_33 = i_14
        char* eax_194 = sub_4c84d0(&data_7027c0, 0x618768)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_194, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_3 = 1
    
    i_2 = i_14 + 1
    i_14 = i_2
while (i_2 s< 0x40)

if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

int32_t i_3 = 0
int32_t var_9b8_4 = 0
int32_t i_15 = 0

do
    char* eax_198 = sub_419fb0(i_3, &var_728)
    
    if (eax_198 == 0)
        if (edi_3 != 0)
            if (data_702fc0 != eax_198)
                eax_198 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_198 = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_198 = nullptr
                    
                    if (data_1af174c == 0 && eax_198 != 0)
                        eax_198 = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_198, data_72d6ac, data_719b6c, &data_616b48, 
                                    &data_616b48), 
                                data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                            data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
            
            edi_3 = 0
        
        if (var_9b8_4 == 0)
            var_9b8_4 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_198, data_72d6ac, data_719b6c, 0x618788, nullptr), 
                        data_72d6ac, data_719b6c, 0x618788, nullptr), 
                    data_72d6ac, data_719b6c, 0x618788, nullptr)
        
        void* var_9cc_17 = &var_728
        int32_t i_34 = i_15
        char* eax_203 = sub_4c84d0(&data_7027c0, 0x6187e0)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_203, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_3 = 1
    
    i_3 = i_15 + 1
    i_15 = i_3
while (i_3 s< 0x20)

if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

int32_t i_4 = 0
int32_t var_9b8_5 = 0
int32_t i_16 = 0

do
    char* eax_207 = sub_41f150(i_4, &var_728)
    
    if (eax_207 == 0)
        if (edi_3 != 0)
            if (data_702fc0 != eax_207)
                eax_207 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_207 = nullptr
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_207 = nullptr
                    
                    if (data_1af174c == 0 && eax_207 != 0)
                        eax_207 = sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_207, data_72d6ac, data_719b6c, &data_616b48, 
                                    &data_616b48), 
                                data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                            data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
            
            edi_3 = 0
        
        if (var_9b8_5 == 0)
            var_9b8_5 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_207, data_72d6ac, data_719b6c, 0x618800, nullptr), 
                        data_72d6ac, data_719b6c, 0x618800, nullptr), 
                    data_72d6ac, data_719b6c, 0x618800, nullptr)
        
        void* var_9cc_18 = &var_728
        int32_t i_35 = i_16
        char* eax_212 = sub_4c84d0(&data_7027c0, 0x618858)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_212, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_3 = 1
    
    i_4 = i_16 + 1
    i_16 = i_4
while (i_4 s< 8)

if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

if (data_12dc2c4 == 0)
label_44fa3d:
    
    if (esi_3 != 0)
        edi_3 = 1
        esi_3 = 0
else
    void* eax_216 = data_703180:4
    uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
    char* var_9cc_19 = &data_12dc2c4
    int32_t var_9d0_3 = 0x134ff80
    char* var_9d4_6 = &data_1352208
    int32_t var_9bc_5 = 0
    void fileName
    sub_4c84d0(&fileName, "%s\%s\%s")
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        int32_t eax_217
        eax_217.b = (findFileData.dwFileAttributes.b & 0x10) != 0
        var_9bc_5 = eax_217 + 1
    
    SetErrorMode(uMode)
    
    if (var_9bc_5 == 1)
        goto label_44fa3d
    
    void* eax_219 = eax_216
    
    if (eax_219 != 0xffffffff)
        eax_219 = sub_4c51f0(eax_219, &data_12dc2c4, eax_219, nullptr)
        
        if (eax_219 != 0)
            goto label_44fa3d
        
        goto label_44f894
    
label_44f894:
    void* edx_237 = &var_728
    char* ecx_242 = &data_12dc2c4
    
    if (data_12dc2c4 != 0)
        do
            eax_219.b = *ecx_242
            
            if (eax_219.b u< 0x80)
            label_44f8c4:
                *edx_237 = eax_219.b
                edx_237 += 1
                ecx_242 = &ecx_242[1]
            else
                if (eax_219.b u< 0xa0)
                    if (eax_219.b u>= 0xfe)
                        goto label_44f8c4
                else if (eax_219.b u<= 0xdf || eax_219.b u>= 0xfe)
                    goto label_44f8c4
                
                *edx_237 = eax_219.b
                eax_219.b = ecx_242[1]
                *(edx_237 + 1) = eax_219.b
                edx_237 += 2
                ecx_242 = &ecx_242[2]
        while (*ecx_242 != 0)
    
    *edx_237 = 0
    
    if (edi_3 == 0)
    label_44f979:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_219, data_72d6ac, data_719b6c, 0x61886c, nullptr), 
                    data_72d6ac, data_719b6c, 0x61886c, nullptr), 
                data_72d6ac, data_719b6c, 0x61886c, nullptr)
    else if (data_702fc0 != 0)
        eax_219 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_219 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_219 = nullptr
            
            if (data_1af174c == 0 && eax_219 != 0)
                eax_219 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_219, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_44f979
    
    void* var_9cc_23 = &var_728
    char* eax_224 = sub_4c84d0(&data_7027c0, 0x61889c)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_224, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0

if (data_12dc2e8 == 0)
label_44fc82:
    
    if (esi_3 != 0)
        edi_3 = 1
        esi_3 = 0
else
    int32_t eax_227 = data_703180:4
    uint32_t uMode_1 = SetErrorMode(SEM_FAILCRITICALERRORS)
    char* var_9cc_24 = &data_12dc2e8
    int32_t var_9d0_5 = 0x134ff80
    char* var_9d4_7 = &data_1352208
    int32_t var_9bc_6 = 0
    void fileName_1
    sub_4c84d0(&fileName_1, "%s\%s\%s")
    WIN32_FIND_DATAA findFileData_1
    HANDLE hFindFile_1 = FindFirstFileA(&fileName_1, &findFileData_1)
    
    if (hFindFile_1 != 0xffffffff)
        FindClose(hFindFile_1)
        int32_t eax_228
        eax_228.b = (findFileData_1.dwFileAttributes.b & 0x10) != 0
        var_9bc_6 = eax_228 + 1
    
    SetErrorMode(uMode_1)
    
    if (var_9bc_6 == 1)
        goto label_44fc82
    
    void* eax_231
    
    if (eax_227 != 0xffffffff)
        eax_231 = sub_4c51f0(eax_227, &data_12dc2e8, eax_227, nullptr)
    
    if (eax_227 != 0xffffffff && eax_231 != 0)
        goto label_44fc82
    
    void* eax_232 = sub_4cfd70(&var_728, &data_12dc2e8)
    
    if (edi_3 == 0)
    label_44fbbe:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_232, data_72d6ac, data_719b6c, 0x6188b8, nullptr), 
                    data_72d6ac, data_719b6c, 0x6188b8, nullptr), 
                data_72d6ac, data_719b6c, 0x6188b8, nullptr)
    else if (data_702fc0 != 0)
        eax_232 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_232 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_232 = nullptr
            
            if (data_1af174c == 0 && eax_232 != 0)
                eax_232 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_232, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_44fbbe
    
    void* var_9cc_28 = &var_728
    char* eax_237 = sub_4c84d0(&data_7027c0, 0x6188ec)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_237, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0

char* eax_240 = sub_4a8610(&var_728)

if (eax_240 == 0)
    if (edi_3 == 0)
    label_44fd49:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_240, data_72d6ac, data_719b6c, 0x618908, nullptr), 
                    data_72d6ac, data_719b6c, 0x618908, nullptr), 
                data_72d6ac, data_719b6c, 0x618908, nullptr)
    else if (data_702fc0 != eax_240)
        eax_240 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_240 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_240 = nullptr
            
            if (data_1af174c == 0 && eax_240 != 0)
                eax_240 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_240, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_44fd49
    
    void* var_9cc_29 = &var_728
    char* eax_245 = sub_4c84d0(&data_7027c0, 0x618944)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_245, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0
else if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

char* eax_248 = sub_41f8b0(&var_728)

if (eax_248 == 0)
    if (edi_3 == 0)
    label_44fed4:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_248, data_72d6ac, data_719b6c, 0x618964, nullptr), 
                    data_72d6ac, data_719b6c, 0x618964, nullptr), 
                data_72d6ac, data_719b6c, 0x618964, nullptr)
    else if (data_702fc0 != eax_248)
        eax_248 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_248 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_248 = nullptr
            
            if (data_1af174c == 0 && eax_248 != 0)
                eax_248 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_248, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_44fed4
    
    void* var_9cc_30 = &var_728
    char* eax_253 = sub_4c84d0(&data_7027c0, 0x61899c)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_253, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0
else if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

char* eax_256 = sub_4a7c90(&var_728)

if (eax_256 == 0)
    if (edi_3 == 0)
    label_45005f:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_256, data_72d6ac, data_719b6c, 0x6189b8, nullptr), 
                    data_72d6ac, data_719b6c, 0x6189b8, nullptr), 
                data_72d6ac, data_719b6c, 0x6189b8, nullptr)
    else if (data_702fc0 != eax_256)
        eax_256 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_256 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_256 = nullptr
            
            if (data_1af174c == 0 && eax_256 != 0)
                eax_256 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_256, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_45005f
    
    void* var_9cc_31 = &var_728
    char* eax_261 = sub_4c84d0(&data_7027c0, 0x6189ec)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_261, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0
else if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

char* eax_264 = sub_418140(&var_728)

if (eax_264 == 0)
    if (edi_3 == 0)
    label_4501ea:
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_264, data_72d6ac, data_719b6c, 0x618a08, nullptr), 
                    data_72d6ac, data_719b6c, 0x618a08, nullptr), 
                data_72d6ac, data_719b6c, 0x618a08, nullptr)
    else if (data_702fc0 != eax_264)
        eax_264 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_264 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_264 = nullptr
            
            if (data_1af174c == 0 && eax_264 != 0)
                eax_264 = sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_264, data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                        data_72d6ac, data_719b6c, &data_616b48, &data_616b48), 
                    data_72d6ac, data_719b6c, &data_616b48, &data_616b48)
        
        goto label_4501ea
    
    void* var_9cc_32 = &var_728
    char* eax_269 = sub_4c84d0(&data_7027c0, 0x618a40)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_269, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0
else if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

int32_t i_5 = 0
int32_t i_17 = 0

do
    char* eax_272 = sub_41b170(i_5, &var_728)
    
    if (eax_272 == 0)
        if (edi_3 != 0)
            eax_272 = sub_55fa50(eax_272, &data_616b48, &data_616b48, eax_272, 0xffffffff)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_272, data_72d6ac, data_719b6c, 0x618a5c, nullptr), 
                    data_72d6ac, data_719b6c, 0x618a5c, nullptr), 
                data_72d6ac, data_719b6c, 0x618a5c, nullptr)
        
        void* var_9cc_33 = &var_728
        int32_t i_36 = i_17
        char* eax_275 = sub_4c84d0(&data_7027c0, 0x618a90)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_275, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        edi_3 = 1
        esi_3 = 0
    else if (esi_3 != 0)
        edi_3 = 1
        esi_3 = 0
    
    i_5 = i_17 + 1
    i_17 = i_5
while (i_5 s< 8)

char* eax_279 = sub_4611f0(&var_728)

if (eax_279 == 0)
    if (edi_3 != 0)
        eax_279 = sub_55fa50(eax_279, &data_616b48, &data_616b48, eax_279, 0xffffffff)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_279, data_72d6ac, data_719b6c, 0x618ab0, nullptr), 
                data_72d6ac, data_719b6c, 0x618ab0, nullptr), 
            data_72d6ac, data_719b6c, 0x618ab0, nullptr)
    
    void* var_9cc_34 = &var_728
    char* eax_282 = sub_4c84d0(&data_7027c0, 0x618af4)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_282, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_3 = 0
else if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

int32_t i_6 = 0
int32_t var_9ac = 0
int32_t i_21 = 0

do
    char* eax_285 = sub_4a6aa0(i_6, &var_728)
    
    if (eax_285 == 0)
        if (edi_3 != 0)
            eax_285 = sub_55fa50(eax_285, &data_616b48, &data_616b48, eax_285, 0xffffffff)
            edi_3 = 0
        
        if (var_9ac == 0)
            var_9ac = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_285, data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                        data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                    data_72d6ac, data_719b6c, 0x618b10, nullptr)
        
        void* var_9cc_35 = &var_728
        int32_t i_37 = i_21
        char* eax_288 = sub_4c84d0(&data_7027c0, 0x618b48)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_288, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_3 = 1
    
    char* eax_291 = sub_4a6bb0(i_21, &var_728)
    
    if (eax_291 == 0)
        if (edi_3 != 0)
            eax_291 = sub_55fa50(eax_291, &data_616b48, &data_616b48, eax_291, 0xffffffff)
            edi_3 = 0
        
        if (var_9ac == 0)
            var_9ac = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_291, data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                        data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                    data_72d6ac, data_719b6c, 0x618b10, nullptr)
        
        void* var_9cc_36 = &var_728
        int32_t i_38 = i_21
        char* eax_294 = sub_4c84d0(&data_7027c0, 0x618b64)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_294, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_3 = 1
    
    int32_t j = 0
    int32_t j_4 = 0
    
    do
        char* eax_297 = sub_4a6c90(j, j, i_21, &var_728)
        
        if (eax_297 == 0)
            if (edi_3 != 0)
                eax_297 = sub_55fa50(eax_297, &data_616b48, &data_616b48, eax_297, 0xffffffff)
                edi_3 = 0
            
            if (var_9ac == 0)
                var_9ac = 1
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_297, data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                            data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                        data_72d6ac, data_719b6c, 0x618b10, nullptr)
            
            void* var_9cc_38 = &var_728
            int32_t var_9d0_12 = (&data_611580)[j_4]
            int32_t i_28 = i_21
            char* eax_301 = sub_4c84d0(&data_7027c0, 0x618b7c)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_301, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            
            esi_3 = 1
        
        j = j_4 + 1
        j_4 = j
    while (j s< 0xa)
    
    int32_t j_1 = 0
    int32_t j_6 = 0
    
    do
        int32_t k = 0
        int32_t k_3 = 0
        
        do
            char* eax_305 = sub_4a6d80(k, j_1, i_21, k, &var_728)
            
            if (eax_305 == 0)
                if (edi_3 != 0)
                    eax_305 = sub_55fa50(eax_305, &data_616b48, &data_616b48, eax_305, 0xffffffff)
                    edi_3 = 0
                
                if (var_9ac == 0)
                    var_9ac = 1
                    
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_305, data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                                data_72d6ac, data_719b6c, 0x618b10, nullptr), 
                            data_72d6ac, data_719b6c, 0x618b10, nullptr)
                
                void* var_9cc_40 = &var_728
                int32_t k_7 = k_3
                int32_t j_9 = j_6
                int32_t i_26 = i_21
                char* eax_308 = sub_4c84d0(&data_7027c0, 0x618b94)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_308, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                            data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr)
                
                esi_3 = 1
            
            j_1 = j_6
            k = k_3 + 1
            k_3 = k
        while (k s< 8)
        
        j_1 += 1
        j_6 = j_1
    while (j_1 s< 8)
    
    i_6 = i_21 + 1
    i_21 = i_6
while (i_6 s< 8)

if (esi_3 != 0)
    edi_3 = 1
    esi_3 = 0

int32_t i_7 = 0
int32_t var_9b8_8 = 0
int32_t i_22 = 0

do
    char* eax_313 = sub_4207d0(i_7, &var_728)
    
    if (eax_313 == 0)
        if (edi_3 != 0)
            eax_313 = sub_55fa50(eax_313, &data_616b48, &data_616b48, eax_313, 0xffffffff)
            edi_3 = 0
        
        if (var_9b8_8 == 0)
            var_9b8_8 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_313, data_72d6ac, data_719b6c, 0x618bc0, nullptr), 
                        data_72d6ac, data_719b6c, 0x618bc0, nullptr), 
                    data_72d6ac, data_719b6c, 0x618bc0, nullptr)
        
        void* var_9cc_41 = &var_728
        char* eax_316 = sub_4c84d0(&data_7027c0, 0x618c08)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_316, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_3 = 1
    
    int32_t j_2 = 0
    int32_t j_5 = 0
    
    do
        char* eax_319 = sub_420930(j_2, j_2, i_22, &var_728)
        
        if (eax_319 == 0)
            if (edi_3 != 0)
                eax_319 = sub_55fa50(eax_319, &data_616b48, &data_616b48, eax_319, 0xffffffff)
                edi_3 = 0
            
            if (var_9b8_8 == 0)
                var_9b8_8 = 1
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_319, data_72d6ac, data_719b6c, 0x618bc0, nullptr), 
                            data_72d6ac, data_719b6c, 0x618bc0, nullptr), 
                        data_72d6ac, data_719b6c, 0x618bc0, nullptr)
            
            void* var_9cc_43 = &var_728
            int32_t var_9d0_17 = (&data_6113c0)[j_5]
            int32_t i_29 = i_22
            char* eax_323 = sub_4c84d0(&data_7027c0, 0x618c2c)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_323, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            
            esi_3 = 1
        
        j_2 = j_5 + 1
        j_5 = j_2
    while (j_2 s< 8)
    
    i_7 = i_22 + 1
    i_22 = i_7
while (i_7 s< 8)

int32_t var_9b0 = esi_3

if (esi_3 != 0)
    esi_3 = 0
    edi_3 = 1
    var_9b0 = 0

char* eax_328 = sub_445790(&var_728)

if (eax_328 == 0)
    if (edi_3 != 0)
        eax_328 = sub_55fa50(eax_328, &data_616b48, &data_616b48, eax_328, 0xffffffff)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_328, data_72d6ac, data_719b6c, 0x618c5c, nullptr), 
                data_72d6ac, data_719b6c, 0x618c5c, nullptr), 
            data_72d6ac, data_719b6c, 0x618c5c, nullptr)
    
    void* var_9cc_44 = &var_728
    char* eax_331 = sub_4c84d0(&data_7027c0, 0x618c94)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_331, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    var_9b0 = 0
else if (esi_3 != 0)
    edi_3 = 1
    var_9b0 = 0

int32_t esi_5 = 0
int32_t i_24 = 0
int32_t eax_370
int32_t i_8

do
    int32_t j_3 = 0
    int32_t j_7 = 0
    
    do
        char* eax_335 = sub_4b7200(&var_728, j_3, i_24, &var_728)
        
        if (eax_335 == 0)
            if (edi_3 != 0)
                eax_335 = sub_55fa50(eax_335, &data_616b48, &data_616b48, eax_335, 0xffffffff)
                edi_3 = 0
            
            if (esi_5 == 0)
                esi_5 = 1
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_335, data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                            data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                        data_72d6ac, data_719b6c, 0x618cb0, nullptr)
            
            void* var_9cc_46 = &var_728
            int32_t j_11 = j_7
            int32_t i_30 = i_24
            char* eax_338 = sub_4c84d0(&data_7027c0, 0x618cdc)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_338, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            
            var_9b0 = 1
        
        char* eax_342 = sub_4b7360(&var_728, j_7, i_24, &var_728)
        
        if (eax_342 == 0)
            if (edi_3 != 0)
                eax_342 = sub_55fa50(eax_342, &data_616b48, &data_616b48, eax_342, 0xffffffff)
                edi_3 = 0
            
            if (esi_5 == 0)
                esi_5 = 1
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_342, data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                            data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                        data_72d6ac, data_719b6c, 0x618cb0, nullptr)
            
            void* var_9cc_48 = &var_728
            int32_t j_12 = j_7
            int32_t i_31 = i_24
            char* eax_345 = sub_4c84d0(&data_7027c0, 0x618cf8)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_345, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            
            var_9b0 = 1
        
        char* eax_349 = sub_4b74c0(&var_728, j_7, i_24, &var_728)
        
        if (eax_349 == 0)
            if (edi_3 != 0)
                eax_349 = sub_55fa50(eax_349, &data_616b48, &data_616b48, eax_349, 0xffffffff)
                edi_3 = 0
            
            if (esi_5 == 0)
                esi_5 = 1
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_349, data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                            data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                        data_72d6ac, data_719b6c, 0x618cb0, nullptr)
            
            void* var_9cc_50 = &var_728
            int32_t j_13 = j_7
            int32_t i_32 = i_24
            char* eax_352 = sub_4c84d0(&data_7027c0, 0x618d14)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_352, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr)
            
            var_9b0 = 1
        
        int32_t k_1 = 0
        int32_t k_4 = 0
        
        do
            char* eax_355 = sub_4b75d0(k_1, j_7, i_24, k_1, &var_728)
            
            if (eax_355 == 0)
                if (edi_3 != 0)
                    eax_355 = sub_55fa50(eax_355, &data_616b48, &data_616b48, eax_355, 0xffffffff)
                    edi_3 = 0
                
                if (esi_5 == 0)
                    esi_5 = 1
                    
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_355, data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                                data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                            data_72d6ac, data_719b6c, 0x618cb0, nullptr)
                
                void* var_9cc_52 = &var_728
                int32_t var_9d0_24 = (&data_611580)[k_4]
                int32_t j_10 = j_7
                int32_t i_27 = i_24
                char* eax_359 = sub_4c84d0(&data_7027c0, 0x618d30)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_359, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                            data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                        data_72d6ac, data_719b6c, &data_7027c0, nullptr)
                
                var_9b0 = 1
            
            k_1 = k_4 + 1
            k_4 = k_1
        while (k_1 s< 0xa)
        
        int32_t k_2 = 0
        int32_t var_9b8_9 = esi_5
        int32_t k_5 = 0
        
        do
            for (int32_t esi_6 = 0; esi_6 s< 8; esi_6 += 1)
                char* eax_364 = sub_4b76f0(&var_728, j_7, i_24, k_2, esi_6, &var_728)
                
                if (eax_364 != 0)
                    eax_370 = var_9b0
                else
                    if (edi_3 != 0)
                        eax_364 =
                            sub_55fa50(eax_364, &data_616b48, &data_616b48, eax_364, 0xffffffff)
                        edi_3 = 0
                    
                    if (var_9b8_9 == 0)
                        var_9b8_9 = 1
                        
                        if (data_702fc0 != 0)
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_364, data_72d6ac, data_719b6c, 0x618cb0, 
                                        nullptr), 
                                    data_72d6ac, data_719b6c, 0x618cb0, nullptr), 
                                data_72d6ac, data_719b6c, 0x618cb0, nullptr)
                    
                    void* var_9cc_54 = &var_728
                    int32_t var_9d0_27 = esi_6
                    int32_t k_6 = k_5
                    int32_t j_8 = j_7
                    int32_t i_25 = i_24
                    char* eax_367 = sub_4c84d0(&data_7027c0, 0x618d4c)
                    
                    if (data_702fc0 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_367, data_72d6ac, data_719b6c, &data_7027c0, 
                                    nullptr), 
                                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
                    
                    eax_370 = 1
                    var_9b0 = 1
                
                k_2 = k_5
            
            k_2 += 1
            k_5 = k_2
        while (k_2 s< 8)
        
        esi_5 = var_9b8_9
        j_3 = j_7 + 1
        j_7 = j_3
    while (j_3 s< 8)
    
    i_8 = i_24 + 1
    i_24 = i_8
while (i_8 s< 0x40)
int32_t esi_7

if (eax_370 == 0)
    esi_7 = var_9b0
else
    edi_3 = 1
    esi_7 = 0

int32_t i_9 = 0
int32_t var_9bc_7 = 0
int32_t i_20 = 0

do
    char* eax_371 = sub_4151f0(i_9, &var_728)
    
    if (eax_371 == 0)
        if (edi_3 != 0)
            eax_371 = sub_55fa50(eax_371, &data_616b48, &data_616b48, eax_371, 0xffffffff)
            edi_3 = 0
        
        if (var_9bc_7 == 0)
            var_9bc_7 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_371, data_72d6ac, data_719b6c, 0x618d78, nullptr), 
                        data_72d6ac, data_719b6c, 0x618d78, nullptr), 
                    data_72d6ac, data_719b6c, 0x618d78, nullptr)
        
        void* var_9cc_55 = &var_728
        int32_t i_39 = i_20
        char* eax_374 = sub_4c84d0(&data_7027c0, 0x618dd8)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_374, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_7 = 1
    
    char* eax_377 = sub_415300(i_20, &var_728)
    
    if (eax_377 == 0)
        if (edi_3 != 0)
            eax_377 = sub_55fa50(eax_377, &data_616b48, &data_616b48, eax_377, 0xffffffff)
            edi_3 = 0
        
        if (var_9bc_7 == 0)
            var_9bc_7 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_377, data_72d6ac, data_719b6c, 0x618d78, nullptr), 
                        data_72d6ac, data_719b6c, 0x618d78, nullptr), 
                    data_72d6ac, data_719b6c, 0x618d78, nullptr)
        
        void* var_9cc_56 = &var_728
        int32_t i_40 = i_20
        char* eax_380 = sub_4c84d0(&data_7027c0, 0x618df4)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_380, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_7 = 1
    
    i_9 = i_20 + 1
    i_20 = i_9
while (i_9 s< 0x20)

if (esi_7 != 0)
    edi_3 = 1
    esi_7 = 0

int32_t i_10 = 0
int32_t var_9b8_10 = 0
int32_t i_18 = 0

do
    char* eax_384 = sub_4a1bc0(i_10, &var_728)
    
    if (eax_384 == 0)
        if (edi_3 != 0)
            eax_384 = sub_55fa50(eax_384, &data_616b48, &data_616b48, eax_384, 0xffffffff)
            edi_3 = 0
        
        if (var_9b8_10 == 0)
            var_9b8_10 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_384, data_72d6ac, data_719b6c, 0x618e10, nullptr), 
                        data_72d6ac, data_719b6c, 0x618e10, nullptr), 
                    data_72d6ac, data_719b6c, 0x618e10, nullptr)
        
        void* var_9cc_57 = &var_728
        int32_t i_41 = i_18
        char* eax_387 = sub_4c84d0(&data_7027c0, 0x618e3c)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_387, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_7 = 1
    
    i_10 = i_18 + 1
    i_18 = i_10
while (i_10 s< 0x20)

if (esi_7 != 0)
    edi_3 = 1
    esi_7 = 0

void* i_11 = &data_12a651c
int32_t var_9b8_11 = 0
int32_t var_9bc_8 = 0
void* i_23 = &data_12a651c

do
    char* eax_391 = sub_459600(i_11, &var_728)
    
    if (eax_391 == 0)
        if (edi_3 != 0)
            eax_391 = sub_55fa50(eax_391, &data_616b48, &data_616b48, eax_391, 0xffffffff)
            edi_3 = 0
        
        if (var_9b8_11 == 0)
            var_9b8_11 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_391, data_72d6ac, data_719b6c, 0x618e4c, nullptr), 
                        data_72d6ac, data_719b6c, 0x618e4c, nullptr), 
                    data_72d6ac, data_719b6c, 0x618e4c, nullptr)
        
        void* var_9cc_58 = &var_728
        int32_t var_9d0_32 = var_9bc_8
        char* eax_394 = sub_4c84d0(&data_7027c0, 0x618e7c)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_394, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_7 = 1
    
    var_9bc_8 += 1
    i_11 = i_23 + 0x24
    i_23 = i_11
while (i_11 s< &data_12a6e1c)

if (esi_7 != 0)
    edi_3 = 1
    esi_7 = 0

int32_t i_12 = 0
int32_t var_9b8_12 = 0
int32_t i_19 = 0

do
    char* eax_398 = sub_41d4c0(i_12, &var_728)
    
    if (eax_398 == 0)
        if (edi_3 != 0)
            eax_398 = sub_55fa50(eax_398, &data_616b48, &data_616b48, eax_398, 0xffffffff)
            edi_3 = 0
        
        if (var_9b8_12 == 0)
            var_9b8_12 = 1
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_398, data_72d6ac, data_719b6c, 0x618e90, nullptr), 
                        data_72d6ac, data_719b6c, 0x618e90, nullptr), 
                    data_72d6ac, data_719b6c, 0x618e90, nullptr)
        
        void* var_9cc_59 = &var_728
        int32_t i_42 = i_19
        char* eax_401 = sub_4c84d0(&data_7027c0, 0x618eb4)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_401, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                    data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        
        esi_7 = 1
    
    i_12 = i_19 + 1
    i_19 = i_12
while (i_12 s< 0x10)

if (esi_7 != 0)
    edi_3 = 1
    esi_7 = 0

char* eax_405 = sub_431b70(0, &var_728)

if (eax_405 == 0)
    if (edi_3 != 0)
        eax_405 = sub_55fa50(eax_405, &data_616b48, &data_616b48, eax_405, 0xffffffff)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_405, data_72d6ac, data_719b6c, 0x618ec8, nullptr), 
                data_72d6ac, data_719b6c, 0x618ec8, nullptr), 
            data_72d6ac, data_719b6c, 0x618ec8, nullptr)
    
    void* var_9cc_60 = &var_728
    char* eax_408 = sub_4c84d0(&data_7027c0, 0x618f04)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_408, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    edi_3 = 1
    esi_7 = 0
else if (esi_7 != 0)
    edi_3 = 1
    esi_7 = 0

char* eax_411 = sub_431b70(1, &var_728)

if (eax_411 == 0)
    if (edi_3 != 0)
        eax_411 = sub_55fa50(eax_411, &data_616b48, &data_616b48, eax_411, 0xffffffff)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_411, data_72d6ac, data_719b6c, 0x618f24, nullptr), 
                data_72d6ac, data_719b6c, 0x618f24, nullptr), 
            data_72d6ac, data_719b6c, 0x618f24, nullptr)
    
    void* var_9cc_61 = &var_728
    eax_411 = sub_4c84d0(&data_7027c0, 0x618f60)
    
    if (data_702fc0 != 0)
        eax_411 = sub_55f390(
            sub_55f1e0(sub_55ef70(eax_411, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
    
    goto label_451b60

if (esi_7 != 0 || edi_3 == 1)
label_451b60:
    int32_t var_9cc_62 = 0xffffffff
    sub_55fa50(eax_411, &data_616bc8, &data_616bc8, 1, 0xffffffff)
else if (edi_3 == 2)
    int32_t var_9cc_63 = 0xffffffff
    sub_55fa50(eax_411, &data_616bc8, &data_616bc8, esi_7, 0xffffffff)

data_1af19d8 = 0
data_1af17cc = 0
LRESULT eax_416 = sub_4525d0(1, 0)
int32_t var_9d8_4
LRESULT var_9d4_9
int32_t eax_417

if (data_1af454c == 0)
    eax_417 = sub_48e950(eax_416, &data_976f90, &data_719b6c, data_108f358, 0)
    var_9d4_9 = data_108f35c
    var_9d8_4 = data_108f358
else
    eax_417 = sub_48e950(eax_416, &data_976f90, &data_719b6c, data_1af4550, 0)
    var_9d4_9 = data_1af4554
    var_9d8_4 = data_1af4550

sub_48efe0(eax_417, &data_976f90, &data_719b6c, var_9d8_4, var_9d4_9)
int32_t eax_419 = data_719b6c - 1

if (eax_419 u> 0x270e || data_976f94 == 0)
    data_976fb0.d = 0xffffffff
else
    eax_419 = data_719b74 + data_976fa8
    data_976fb0.d = eax_419

void* result = sub_4eeae0(eax_419, &data_976f90, &data_719b6c, 0xffffffff, 6, nullptr, nullptr)

if (data_702fc0 != 0 && data_1313cd4 == 0)
    result = sub_55af90()

sub_5f02dd(eax_1 ^ &var_9c0)
return result
