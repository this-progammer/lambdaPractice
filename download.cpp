// download.cpp
// Aether, Hunter M.
#include <string>
#include <iostream>

class DownloadDialog {
public:
    inline DownloadDialog& getDialog() {
        return *this;
    }
};

class Download {
    const std::string zipf;
    size_t zipsz;
public:
    inline Download& getDownload() {
        return *this;
    }
    
    const std::string& getZip() {
        return zipf;
    }

    inline size_t getSize() {
        return zipsz;
    }

    inline virtual void SendDownloadDialog(DownloadDialog& dialog) = 0;
    inline virtual void SendDownloadDialogPtr(DownloadDialog* pDlg) = 0;
};

inline void Download::SendDownloadDialog( DownloadDialog& dialog ) {
       if( sizeof( dialog ) == 0 ) {
           std::cout << "Dialog Is Null Cannot Connect." << std::endl;
       }
    for( auto i = dialog; i !=(dialog.getDialog()); i++ ){
        
    }
}
