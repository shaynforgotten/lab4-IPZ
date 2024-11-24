graph TD
    A([Start]) --> B[/Input: $$r_start, r_end, \Delta r, \phi_start, \phi_end, \Delta \phi$$/]
    B --> C{Validate inputs \\ $$r_start < r_end \\ \phi_start < \phi_end \\ andn \Delta r, \Delta \phi > 0$$}
    C -- Yes --> D[Set $$r = r_start, \phi = \phi_start$$]
    C -- No --> Z([Invalid data! Stop])
    D --> E{Is $$r \leq r_end$$?}
    E -- No --> F([End])
    E -- Yes --> G{Is $$\phi \leq \phi_end$$?}
    G -- No --> L[Increment $$r = r + \Delta r$$] --> E
    G -- Yes --> H{"Check range \\ $$r^2 - 6.57 - \phi| > 0$$?"}
    H -- Yes --> I["Compute: $$z = \log_3 |r^2 - 6.57 - \phi|$$"]
    H -- No --> J["Set $$z = \text{N/A}$$"]
    I --> K[/"Output: $$r, \phi, z$$"/]
    J --> K
    K --> M[Increment $$\phi = \phi + \Delta \phi$$]
    M --> G
