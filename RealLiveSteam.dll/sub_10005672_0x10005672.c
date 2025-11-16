// 函数: sub_10005672
// 地址: 0x10005672
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

for (int32_t* i = &data_1001b0a0; i s< &data_1001b1a0; i = &i[1])
    void* edi_1 = *i
    
    if (edi_1 != 0)
        if (edi_1 u< edi_1 + 0x800)
            CRITICAL_SECTION* lpCriticalSection = edi_1 + 0xc
            
            do
                if (lpCriticalSection->__offset(0xfffffffffffffffc).d != 0)
                    DeleteCriticalSection(lpCriticalSection)
                
                lpCriticalSection += 0x40
            while (lpCriticalSection - 0xc u< *i + 0x800)
        
        _free(*i)
        *i = 0
